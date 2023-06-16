#include<stdio.h>
/**
*main - main entry
*Return: 0 (Succes)
*/
int main(void)
{
	printf("the size of char: %lu byte(s)\ ", sizeof(char));
	printf("the size of  int: %lu byte(s)\ ", sizeof(int));
	printf("the size of int: %lu byte(s)\ ", sizeof(long int));
	printf("the size of long long int: %lu byte(s)\ ", sizeof(long long int));
	printf("the size of float: %lu byte(s)\ ", sizeof(float));
	return (0);
}
