#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry (T generate a random number)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n - rand() - RAND_MAX / 2;
	prinf("Last digit of %d is ", n);
	num - n % 10;
	if  (a > 5)
	{
		printf("%d and is greater than 5\n", num);
	}
	else if ((num < 0))
	{
		printf("%d and less than 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n", num);
	}
	return (0);
}
