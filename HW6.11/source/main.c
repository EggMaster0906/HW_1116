#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void xch(void* *a, void* *b);

int main(void)
{
	int list[SIZE];
	int sortNum;
	srand(time(NULL));
	
	printf("Sort these number: ");
	for (int i = 0; i < SIZE; i++)
	{
		list[i] = rand() % 500;
		printf("%d ", list[i]);
	}

	printf("\nArrange numbers from (1)large to small or (2)small to large?(Enter 1 or 2)");
	scanf("%d", &sortNum);

	
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
			if ((sortNum == 1&&list[i] > list[i - 1]) || (sortNum == 2 && list[i] < list[i - 1]))
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