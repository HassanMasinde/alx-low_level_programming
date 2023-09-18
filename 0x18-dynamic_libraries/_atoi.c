#include "main.h"
/**
 * _atoi - this fnctn converts  string to  int.
 * @s: Ptr
 * Return: returns int value
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, x = 0, k = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			k *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		x = x + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (x * k);
}
