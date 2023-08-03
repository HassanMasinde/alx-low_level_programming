#include "main.h"
#include <stdio.h>

/**
 *  binary_to_uint - Entry point
 *  @b: is pointing to a string of 0 and chars
 *  Return:: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ko = 0;
	int k;

	while (*b != '\0')
		return (0);
	for (ko = 0; b[k]; k++)
	{
		if (b[k] > '1' || b[k] < '0')
			return (0);
		k = 2 * k + (b[k] - '0');
	}
	return (ko);
}
