#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int Leap_year(int year)
{
	/*
	�ж���������:
	1.year�ܱ�4���������ܱ�100����
	2.year�ܱ�400����
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
	printf("������һ�����:\n");
	scanf("%d", &year);
	
	int leap = Leap_year(year);//����������㺯��
	if (leap == NULL)
		printf("%d��������\n",year);
	else
	printf("%d������\n",year);
	

	printf("---------------------------------------------------------------------------------------\n");
	printf("������1000�굽2000�������:\n");
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