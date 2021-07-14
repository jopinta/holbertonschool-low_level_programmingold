#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *
 * Return: o y 1
 *@argc: count
 *@argv: vector
 *
 */

int main(int argc, char *argv[])

{
	int val;

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}


	val = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", val);
	return (0);
}
