#include <stdio.h>

/**
 * main - Prints some letters of alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
	}
purchar('\n');
return (0);
}
