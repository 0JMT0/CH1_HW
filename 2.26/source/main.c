#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("Enter two integers, and I will tell you\n");
	printf("if the first one is a multiple of the second one:");
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2)
	{
		if ((num1 % num2) == 0)
		{
		printf("%d is a multiple of %d\n", num1, num2);
		}
		if ((num1 % num2) != 0)
		{
		printf("%d is not a multiple of %d\n", num1, num2);
		}
	}
	if (num1 < num2)
	{
		printf("%d is smaller than  %d, please make the first one larger than the second one\n", num1, num2);
	}
	system("pause");
	return 0;
}