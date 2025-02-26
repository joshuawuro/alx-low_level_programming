#include <ctype.h>
#include <stdio.h>
/**
 * main - prints alphabets to the screen in lowercase using putchar()
 *
 * Return: 0 always success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	return (0);
}
