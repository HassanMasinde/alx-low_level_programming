#include "main.h"
/**
 * _isalpha - rtrn 1 if c is a Lowercase or Uppercase
 * @c: Value to be compared with ASCII value
 * author: HassanMasinde
 * Return: On success return 1 else 0.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
