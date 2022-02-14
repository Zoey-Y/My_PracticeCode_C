#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int Leap_year(int year)
{
	/*
	判断闰年条件:
	1.year能被4整除但不能被100整除
	2.year能被400整除
	*/
	if (year % 4 == 0 && year % 100 != 0)
		return year;
	else if (year % 400 == 0)
		return year;
	else
		return NULL;
	
}
int main()
{
	int year = 0;
	printf("请输入一个年份:\n");
	scanf("%d", &year);
	
	int leap = Leap_year(year);//调用闰年计算函数
	if (leap == NULL)
		printf("%d不是闰年\n",year);
	else
	printf("%d是闰年\n",year);
	

	printf("---------------------------------------------------------------------------------------\n");
	printf("以下是1000年到2000年的闰年:\n");
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d\t", year);
		}
		else if (year % 400 == 0)
		{
			printf("%d\t", year);
		}
		
	}
	system("pause");
}