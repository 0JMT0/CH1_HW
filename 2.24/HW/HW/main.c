#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;

	printf("Enter one integer, and I will tell you\n");
	printf("It is even or odd:");
	scanf_s("%d", &num1);
	
	if ((num1 % 2) == 0)
	{
		printf("%d is even\n", num1);
	}
	if ((num1 % 2) == 1)
	{
		printf("%d is odd\n", num1);
	}
	system("pause");
	return 0;
}