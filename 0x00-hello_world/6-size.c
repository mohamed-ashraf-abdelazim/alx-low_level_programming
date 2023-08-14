#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function
 *
 * Return: Always 0 (Sucess)
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: ", sizeof (a), " byte(s)\n");
	printf("Size of an int: ", sizeof (b), " byte(s)\n");
	printf("Size of a long int: ", sizeof (c), " byte(s)\n");
	printf("Size of a long long int: ", sizeof (d), " byte(s)\n");
	printf("Size of a float: ", sizeof (e), " byte(s)\n");
	return (0);
}
