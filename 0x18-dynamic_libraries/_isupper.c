#include "main.h"
#include "main.h"

/**
 * _isupper - Checks uppercase
 * @c: Character
 * Return: Success 0 Always
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);

	else
		return (0);
}
