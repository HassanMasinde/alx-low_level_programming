#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints out Character to the stdout
 * @c: Char to be prnted
 * Return: Integer
 */
int  _putchar(char c)
{
	write(1, &c, 1);

	return (0);
}
