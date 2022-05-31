#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - a function that prints the binary representation of a
 *		    number.
 * @b: pointer variable thet holds the pointer to a string in memory
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	/* convert from binary to decimal */
	unsigned int len = 0, temp, base_power = 1; /* anythin ^0 = 1 */
	unsigned int binary_bit = 0, answer = 0;

	if (b == NULL)
		return (0);
	/* loop through to check if it is only 0's and 1s */
	while (*(b + len) != '\0')
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		len++; /* we dont really need the length */
	}
	/*
	 *here, we're expected to know the length of the string and
	 * have only binary elements
	 */
       /* convert from base 2 to 10 */
	temp = atoi(b);
	while (temp > 0)
	{
		binary_bit = temp % 10; /* get the lsb */
		/* perform expansion from the lsb and store in a variable */
		answer = answer + (binary_bit * base_power);
		temp /= 10; /* remove already handled lsb from the bin num */
		/* at the MSB temp / 10 will give 0; the end */
		base_power *= 2; /* on each loop, increase power of 2 from 0 */
	}
	return (answer);
}
