#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program prints out the value of
 * a number compared to 5 or 6 depending on
 * its divisibility by 10.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 * Sample code I tried to test the logic flow
	 *
	 * printf("Give me a number\n");
	 * scanf("%d", &number);
	 * last_digit = number % 10;
	 * if(last_digit > 5)
	 * printf("The last digit of %d is greater than 5.\n", number);
	 * else if(last_digit < 6 && last_digit != 0)
	 * printf("The last digit of %d is less than 6 and not equal to 0\n", number);
	*/

	if ((n % 10) == 0)
		printf("Last digit of %d is % d and is 0\n", n, n % 10);
	else if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0);
}
