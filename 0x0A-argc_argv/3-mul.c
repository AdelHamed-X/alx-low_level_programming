#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if(argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		int j;

		j = argv[1] * argv[2];
		printf("%i\n", j);
	}
	return (0);
}
