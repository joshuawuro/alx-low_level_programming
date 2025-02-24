#include <unistd.h>
/**
 * main - prints message
 *
 * Return: 1 Always success else 0 as error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
