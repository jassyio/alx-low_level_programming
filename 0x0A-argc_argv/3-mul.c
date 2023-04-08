#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two integers
 *@argc: number of arguments in the array.
 *@argv: value of arguments
 *return - always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
