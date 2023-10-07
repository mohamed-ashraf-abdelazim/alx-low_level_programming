#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplay two arguments
 * @argc: num of arg
 * @argv: str of srg
 * Return: 0 success 1 failure
*/

int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
