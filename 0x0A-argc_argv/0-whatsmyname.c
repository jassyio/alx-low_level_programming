#include<stdio.h>

/**
 * main- prints the name of the file.
 *@argc: number or characters.
 *@argv: value of array
 *return: always - 0 (succes)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
