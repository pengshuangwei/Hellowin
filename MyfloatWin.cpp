#include<stdio.h>
int main()
{
	float f;
	int i;
	for (i = 0; i < 7; i++) {
		printf("请输入一个浮点数：\n");
		scanf_s("%f", &f);
		printf("该浮点数的值为%f\n", f);
	}
	return 0;
}