#include "main.h"

/**
 * factor_tree - factorizes a number and prints the factors
   in the format of n = a * b
 * @number: number to factorize
 * Return: void
 */

/**
void factor_tree(int number)
{
	int *divisors;

	divisors = malloc(sizeof(int) * 100);
	if (divisors == NULL)
	{
		fprintf(stderr, "Malloc failed\n");
		exit(1);
	}
	if (number % 2 == 0)
	{
		number = number / 2;
		if (divisors == NULL)
		{
			divisors[0] = 2;
		}
		else
		{
			divisors[sizeof(divisors) - 1] = 2;
		}
		factorizer(number);
	}
	else if (number % 3 == 0)
	{
		number = number / 3;
		if (divisors == NULL)
		{
			divisors[0] = 3;
		}
		else
		{
			divisors[sizeof(divisors) - 1] = 3;
		}
		factorizer(number);
	}
	else if (number % 5 == 0)
	{
		number = number / 5;
		if (divisors == NULL)
		{
			divisors[0] = 5;
		}
		else
		{
			divisors[sizeof(divisors) - 1] = 5;
		}
		factorizer(number);
	}
	else if (number % 7 == 0)
	{
		number = number / 7;
		if (divisors == NULL)
		{
			divisors[0] = 7;
		}
		else
		{
			divisors[sizeof(divisors) - 1] = 7;
		}
		factorizer(number);
	}
	else
	{
		printf("%d = %d * 1\n", number);
	}
	printf("%d = ", number);
	for (int i = 0; i < sizeof(divisors) - 1; i++)
	{
		printf("%d * ", divisors[i]);
	}
	printf("%d\n", divisors[sizeof(divisors) - 1]);
	free(divisors);		
}

*/

/**
 * second_factorizer - factorizes a number and prints the factors
   in the format of n = a * b, where a and b are prime numbers
 * @number: number to factorize
 * return: array of prime factors
 */

void *second_factorizer(int number)
{
	int *divisors;
	int potential_divisor = 2;
	int index = 0;
	int initial_number = number;

	divisors = malloc(sizeof(int) * 100);
	if (divisors == NULL)
	{
		fprintf(stderr, "Malloc failed\n");
		exit(1);
	}
	while (potential_divisor <= number)
	{
		if (number % potential_divisor == 0)
		{
			number = number / potential_divisor;
			divisors[index] = potential_divisor;
			index++;
		}
		else
		{
			potential_divisor++;
		}
	}
	printf("%d = ", initial_number);
	for (int i = 0; i < index - 1; i++)
	{
		printf("%d * ", divisors[i]);
	}
	printf("%d\n", divisors[index - 1]);
	free(divisors);
}