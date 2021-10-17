#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("Enter three integers, and I will tell you\n");
	printf("who is the largest and who is the smallest:");
	scanf_s("%d%d%d", &num1, &num2 , &num3);

	if (num1 == num2 && num2 < num3)//first equal situation
	{
		printf("%d is the largest\n", num3);
		printf("Others are equal\n");
	}
	if (num1 == num2 && num2 > num3)//first equal situation
	{
		printf("%d is the smallest\n", num3);
		printf("Others are equal\n");
	}
	if (num2 == num3 && num2 < num1)//second equal situation
	{
		printf("%d is the largest\n", num1);
		printf("Others are equal\n");
	}
	if (num2 == num3 && num2 > num1)//second equal situation
	{
		printf("%d is the smallest\n", num1);
		printf("Others are equal\n");
	}
	if (num1 == num3 && num1 < num2)//third equal situation
	{
		printf("%d is the largest\n", num2);
		printf("Others are equal\n");
	}
	if (num1 == num3 && num1 > num2)//third equal situation
	{
		printf("%d is the smallest\n", num2);
		printf("Others are equal\n");
	}
	if (num1 == num2 && num2 == num3)//all equal situation
	{
		printf("They are all equal\n");
	}
	if (num1 > num2 && num2 > num3)//num1 is the largest
	{
		printf("largest:%d , smallest:%d\n", num1 , num3);
	}
	if (num1 > num2 && num2 < num3 && num1 > num3)//num1 is the largest
	{
		printf("largest:%d , smallest:%d\n", num1, num2);
	}
	if (num2 > num1 && num1 > num3)//num2 is the largest
	{
		printf("largest:%d , smallest:%d\n", num2, num3);
	}
	if (num2 > num1 && num1 < num3 && num2 > num3)//num2 is the largest
	{
		printf("largest:%d , smallest:%d\n", num2, num1);
	}
	if (num3 > num2 && num2 > num1)//num3 is the largest
	{
		printf("largest:%d , smallest:%d\n", num3, num1);
	}
	if (num3 > num2 && num2 < num1 && num3 > num1)//num3 is the largest
	{
		printf("largest:%d , smallest:%d\n", num3, num2);
	}
	system("pause");
	return 0;
}