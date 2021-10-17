#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d,e,total;
	printf("Please enter these question:\n");
	printf("一天行駛里程數、每公升汽油價錢、平均每公升行駛的里程數、一天停車費、一天過路費\n");
	scanf_s("%f%f%f%f%f", &a , &b , &c , &d , &e);
	total = (a / c)*b + d + e;
	printf("一天總花費:%f\n", total);
	system("pause");
	return 0;
}