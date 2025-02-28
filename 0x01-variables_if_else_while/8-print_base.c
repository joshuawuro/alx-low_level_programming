#include <ctype.h>
#include <stdio.h>
/**
 * main - prints all numbers in lowercase in base 16 followed by a new line
 *
 * Return: 0 always success
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
