#include<stdio.h>
/**
 * main - 6-size.c
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an init: %lu byte(s)\n", sizeof(int));
	printf("Size of a long init: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long init: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
