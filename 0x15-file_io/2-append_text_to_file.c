#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 *	   be written, write “fails”, etc…) or filename is NULL
 *
 * Description: If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, str_len = 0;

	if (filename == NULL)
		return (-1);
	/* create a file */
	file_desc = open(filename, O_WRONLY | O_APPEND);
	/* test for failure */
	if (file_desc == -1)
		return (-1);
	/* calculate string length to know bytes to write */
	while (text_content[str_len] != '\0')
		++str_len;
	/* write to file followinf conditions */
	if (text_content)
	{	/* test for failure */
		if (write(file_desc, text_content, str_len) != -1)
		{
			close(file_desc);
			return (1);
		}
	}
	close(file_desc);
	return (-1);
}
