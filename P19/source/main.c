#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char string1[20];
	char string2[] = "string literal";

	printf("Enter a string: ");
	scanf("%s", string1);

	printf("String1 is: %s\n"
		"String2 is: %s\n"
		"String1 with spaces between characters is: \n", string1, string2);

	for (int i = 0; string1[i] != '\0'; i++)
	{
		printf("%c ", string1[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}