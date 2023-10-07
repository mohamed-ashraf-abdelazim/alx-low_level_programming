#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum of args
 * @argc: num of arg
 * @argv: str of arg
 * Return: 0 success
*/

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	if (argv[i] >= 64)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
	}
	return (0);
}
