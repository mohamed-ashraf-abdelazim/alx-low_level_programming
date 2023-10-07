#include <stdio.h>

/**
 * main - print its argument
 * @argc: num of arg
 * @argv: string of arg
 * Return: 0 success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
