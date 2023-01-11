#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//Counts
	int i;
	//Argument limit for the arithimetic.
	int limit;

	//Checks for argument count existing
	if (argc != 2)
	{
		printf("I need an int argument to work. Try Again!\n");
		return (1);
	}

	//Convert the 2nd Argument to an int for working with.
	limit = atoi(argv[1]);

	//Check if int is negative and exit if it is.
	if (limit <= 0)
	{
		printf("No Negatives or Non-digits please...Try Again!\n");
		return (1);
	}

	//Perform PentySepty operation if int is +ve
	for (i = 1; i < limit; i++)
	{
		if (i % 35 == 0)
		{
			printf("%d: PentySepty\n", i);
		}
		else if( i % 7 == 0)
		{
			printf("%d: Septy\n", i);
		}
		else if(i % 5 == 0)
		{
			printf("%d: Penty\n", i);
		}
	}
	return (0);
}
