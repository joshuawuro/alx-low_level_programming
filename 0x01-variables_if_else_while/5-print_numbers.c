#include <stdio.h>
/**
 * main - prints single digit numbers of base 10 starting from 0
 *
 * Return: 0 alway success
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		printf("%d", c);
	printf("\n");
	return (0);
}
