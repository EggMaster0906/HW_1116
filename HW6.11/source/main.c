#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

void xch(void* *a, void* *b);

int main(void)
{
	printf("Enter %d integers: \n",SIZE);
	int list[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &list[i]);
	}

	printf("\n");
	
	for (int a = 0; a < SIZE; a++)
	{
		for (int i = SIZE - 1; i > a; i--)
		{
			printf("\n");
			for (int j = 0; j < SIZE; j++)
			{
				if (j == i - 1)
					printf("[");
				printf("%d ", list[j]);
				if (j == i)
					printf("\b] ");
			}
			if (list[i] > list[i - 1])
			{
				printf("    (Swap %d %d)", list[i], list[i - 1]);
				xch(&list[i], &list[i - 1]);
			}
		}

	}

	printf("\n\nThe results after sorting is:\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n\n");
	system("pause");
	return 0;
}

void xch(void* *a, void* *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}