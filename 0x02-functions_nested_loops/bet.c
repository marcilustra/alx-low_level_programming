#include <stdio.h>

int main(void)
{
	printf("Before loop\n");
	
	int i;

	i = -9;
	while (i < 0)
	{
    		printf("%d", -i);
    		i++;
	}
        printf("\nWhile loop exited\n");

	i = 0;
	while (i < 10)
	{
		i++;
		printf("%d", i % 2);
	}

	i = 9;

	while (i--)
	{
		printf("%d ", i);
	}

        return(0);
}
