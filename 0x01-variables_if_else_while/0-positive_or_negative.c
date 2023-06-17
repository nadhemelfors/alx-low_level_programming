#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
*main - entry main
*description number positif or negative
*Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n == 0)
	{
		printf("%d is 0", n);
	}
	else
	{
		printf("%d is positive", n);
	}
	return (0);
}
