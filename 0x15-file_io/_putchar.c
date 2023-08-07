#include "main.h"

/**
 * _putchar - Entry point
 * @c: the argument
 * Return: return 1 on success else return -1 on failure
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
