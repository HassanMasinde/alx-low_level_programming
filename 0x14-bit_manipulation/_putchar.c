#include "main.h"

/**
 * _putchar - Entry point
 * @c: argument
 * Return: 1 0n success else return -1 on failure
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
