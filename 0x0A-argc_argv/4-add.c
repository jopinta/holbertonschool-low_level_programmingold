#include <stdio.h>
#include <stdlib.h>

/**
 *main- entry point
 *
 * Return: always 0
 *@argv: vector
 *@argc: counter
 */

int main(int argc, char *argv[])

{
	int suma;
	int res = 0;

		for (suma = 1; suma < argc; suma++)
		{
			if (atoi(argv[suma]) == 0 && *argv[suma] == 48)
			{
			printf("Error\n");
			return (1);
			}
			else
			{
				res += atoi(argv[suma]);
			}
		}
		printf("%d\n", res);
		return (0);
	}
