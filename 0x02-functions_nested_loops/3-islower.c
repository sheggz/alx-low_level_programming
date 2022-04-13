#include "main.h"
/**
 * _islower - check if parameter is lowercase or not
 * @c: charater to be investigated
 * Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
