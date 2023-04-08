#include <stdio.h>

/**
 * main- prints the number of arguments
 *@argc: the number of arguments
 *@ argv: the value of arguments
 * return - always - 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
	{
		printf("%d\n", argc -1);

		return (0);
	}
