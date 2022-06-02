#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 *	   be written, write “fails”, etc…) or filename is NULL
 *
 * Description: The created file must have those permissions: rw-------.
 *		 If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, str_len = 0;

	if (filename == NULL)
		return (-1);
	/* create a file */
	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
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
		return (-1);
	}
	close(file_desc);
	return (-1);
}
