#include "main.h"
/**
 * _islower - Checks if a char is lowercase if YES it returns 1
 * else returns 0 just like islower() function in ctype.h
 * @c:  int value to be compared with the ASCII value
 * author: Hassan Masinde
 * Return: On success return 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
