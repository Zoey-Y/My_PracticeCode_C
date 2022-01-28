# include<stdio.h>
#include<stdlib.h>
int main()
{
	int input = 0;
	int Max(int x, int y, int z);//调用求Max的功能函数
	int a, b, c, d;
	scanf_s("%d,%d,%d", &a, &b, &c);
	d = Max(a, b, c);
	printf("Max=%d\n",d);
	system("pause");
	return 0;
}
Max(int x, int y, int z)
{
	int M = 0;
	if (x > y & y > z)
	{
		int M = x;
	}
	else if (y > x & x > z)
	{
		int M = y;
	}
	else
	{
		int M = x;
	}
}