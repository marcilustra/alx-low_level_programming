#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//Counts
	int i;
	int limit;
	
	if (argc != 2)
	{
		printf("I need an integer to work\n");
		return (1);
	}
	limit = atoi(argv[1]);
	for (i = 1; i < limit; i++)
	{
		if (i % 5 == 0 && i % 7 == 0)
		{
			printf("%d: Penty_Septy\n", i);
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
