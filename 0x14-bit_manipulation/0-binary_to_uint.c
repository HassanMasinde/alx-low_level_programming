#include "main.h"
#include <stdio.h>

/**
 *  binary_to_uint - Entry point
 *  @b: is pointing to a string of 0 and chars
 *  Return:: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int ko;
	unsigned int dec_val = 0;

	if (!*b)
		return (0);

	for (ko = 0; b[ko]; ko++)
	{
		if (b[ko] < '0' || b[ko] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[ko] - '0');
	}

	return (dec_val);
}

