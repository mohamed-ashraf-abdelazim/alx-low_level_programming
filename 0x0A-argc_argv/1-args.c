#include <stdio.h>

/**
 * main - prints num of arguments
 * @argc: num of arguments
 * @argv: string of the arguments
 * Return: 0 success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
