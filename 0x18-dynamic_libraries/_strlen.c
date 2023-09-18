#include "main.h"
/**
 * _strlen - Counting the length of string
 * @s: Ptr for counting the strting lenth
 * Author: HassanMasinde
 * Return: Integer i
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
