#include <stdio.h>
/**
 * main - prints prints all possible combinations of single digit numbers
 *
 * Return: 0 always success
 */
int main(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
