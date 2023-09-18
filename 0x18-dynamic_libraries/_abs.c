#include "main.h"
/**
 * _abs - Computes  absolute value of an int
 * @n: The integer
 * author: HassanMasinde
 * Return: Returns an unsingned to a function being called
 */
int _abs(int n)
{
	if (n > 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
