#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w, h, BMI;
	printf("Please enter your weight(kg) and height(cm):");
	scanf_s("%f%f", &w , &h);
	BMI = w / (h / 100.0*h / 100.0);
	printf("Your BMI is: %f\n", BMI);
	printf("\nBMI VALUES\nUnderweight:	less than 18.5\nNormal:		between 18.5 and 24.9\nOverweight:	between 25 and 29.9\nObese:		30 or greater\n");
	system("pause");
	return 0;
}