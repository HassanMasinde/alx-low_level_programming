#include <main.h>

/**
 * main - print the alphabets
 * Return: Always ) (success)
 */

void print_alphabet(void)
{
	char songi;

	for (songi = 'a'; songi <= 'z'; songi++)
	{
		putchar(songi);
	}
	_putchar('\n');

