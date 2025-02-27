#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabets in lowecase and uppercase followed by a new line
 *
 * Return: 0 always success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return(0);
}
