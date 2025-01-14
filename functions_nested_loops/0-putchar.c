#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	char str[] = "_putchar\n";

	write(STDOUT_FILENO, str, sizeof(str) - 1);
	return (0);
}
