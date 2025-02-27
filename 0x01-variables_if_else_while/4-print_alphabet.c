#include <ctype.h>
#include <stdio.h>
/**
 * main - prints alphabets in lower case except q and e
 *
 * Return: 0 always success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return(0);
}
