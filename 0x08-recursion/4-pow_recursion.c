#include"main.h"

/**
 * _pow_recursion - a function that returns the value of x
 *		    raised to the power of y
 * @x: number
 * @y: index
 * Return: x^y
*/

int _pow_recursion(int x, int y)
{
	/* 
	* EXPLANATION - case study 2^4 = 2^1 * 2^3;
	* 2^4 = 2^1 * (2^1 * 2^2)
	* we can say on each instance x^y = x * x^(y - 1)
	*/
	
	/* BASE CASE */
	if (y == 1)
		return (x);
	return (x * _pow_recursion (x, y - 1));

}
