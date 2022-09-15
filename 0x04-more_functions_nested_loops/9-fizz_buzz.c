#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints 1 - 100
 * for multiples of 3, prints fizz
 * for multiples of 5, prints buzz
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
