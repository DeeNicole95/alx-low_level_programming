<<<<<<< HEAD
nnnn
=======
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
>>>>>>> 4b9ff37fda0e2be803d10026cc15ca3d383252ba
