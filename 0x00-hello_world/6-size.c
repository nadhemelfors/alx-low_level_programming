#include<stdio.h>
/**
*main - main entry
*Return: 0 (Succes)
*/
int main(void)
{
	printf("the size of char: %d byte(s)", sizeof(char));
	printf("the size of  int: %d byte(s)", sizeof(int));
	printf("the size of int: %d byte(s)", sizeof(long int));
	printf("the size of long long int: %d byte(s)", sizeof(long long int));
	printf("the size of float: %d byte(s)", sizeof(float));
	return (0);
}
