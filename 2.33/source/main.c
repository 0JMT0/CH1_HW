#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d,e,total;
	printf("Please enter these question:\n");
	printf("�@�Ѧ�p���{�ơB�C���ɨT�o�����B�����C���ɦ�p�����{�ơB�@�Ѱ����O�B�@�ѹL���O\n");
	scanf_s("%f%f%f%f%f", &a , &b , &c , &d , &e);
	total = (a / c)*b + d + e;
	printf("�@���`��O:%f\n", total);
	system("pause");
	return 0;
}