#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all single digit numbers of base 10 from zero followed by a new line
 *
 * Return: 0 always success
 */
int main(void)
{
	int a;
	
	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');	
	return (0);
}
