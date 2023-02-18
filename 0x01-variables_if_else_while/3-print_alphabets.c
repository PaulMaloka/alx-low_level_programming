#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'a' ; i <= 'z'; i++)
	{
		putchar(toupper(i));
	}
		putchar('\n');
	return (0);
}
