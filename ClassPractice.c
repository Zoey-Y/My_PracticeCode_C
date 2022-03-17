#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//求阶乘之和 1!+2!+3!+4!+.....+n!
/*
1!=1,
2! = 1*(1+1)
3!=1*2*(2+1)
         n*(n+1)

-------------------------------------
int func(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*func(n-1);
	}
}
int main()
{
	int sum = 0;
	int n = 0;
	printf("please input n = \n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		
		sum = sum + func(n);
	}
	printf("sum =%d\n", sum);
	
system("pause");
	return 0;
}
*/


//100—90：优秀 良好 中等 不及格
/*int main()
{
	int grade = 0;
	printf("please input your score\n");
	scanf("%d",&grade);
	switch (grade)
	{
	case 10:
	case 9:
		printf("优秀\n");
		break;
	case 8:
		printf("良好\n");
		break;
	case 7:
		printf("中等\n");

	}

}
*/

//计算：1 + 2^2 + 3^2+....+100^2 

/*int main()
{
	long s = 0;
	int i, j = 1;
	s = 0;//让s再次使用时初始为0
	for (i = 1; i <= 100; i++)
	{
		j = i*i;
		s = s + j;
	}
	printf("计算结果是:%d\n", s);
	system("pause");
}
*/
/*
int main()
{
	float x, y;
	x = 3.5;
	y = 4.6;
	printf("对x的强制类型转换:%f\n", (int)x + y);
	printf("对y+x的强制类型转换:%d\n", (int)(x + y));
	system("pause");
}
*/


/*int main()
{
	char arr1[] = "I am a handsome";
		char arr2[] = { 's', 'a', 'd' };

	printf("sizeof(arr1)=%d\n", sizeof(arr1));    //算上空格和'\0'为16

	//字节时，给定多少字节，内存就提供多少字节，不算算'\0'所以结果为3
	printf("sizeof(arr2)=%d\n", sizeof(arr2));   

	printf("strlen(arr1)=%d\n", strlen(arr1));    //求字节长度：15

	//求字节长度：随机值。由于在初
	//始化时没有提供'\0',所以数到字符'd'时，
	//会继续执行，直到计算机随机生成了'\0'停止，所以结果是是随机值
	printf("strlen(arr2)=%d\n", strlen(arr2));
	system("pause");
	return 0;
}*/



//计算n的阶乘
/*
int func(int i)
{
	if (i == 1)
	{
		return 1;
	}
	else
	{
		return i*func(i - 1);
	}
}
int main()
{
	
	int n = 0;
	printf("请输入阶乘：\n");
	scanf("%d", &n);
	int sum = 0;
	int i = 0;
	
	for (i = 1; i <= n; i++)
	{
		sum = sum + func(i);
	}
	printf("阶乘之和为:%d\n", sum);
	system("pause");
	return 0;
}
*/

//求1—100之间的奇数之和,偶数之积
/*
#include<math.h>
int main()
{
	int sum =0;
	int i = 0;
	double product = 1;
	for (i = 1; i <= 100; i += 2)
	{
		sum = sum + i;
	}
	for (i = 2; i <= 100; i += 2)
	{
		product = product*i;
	}

	printf("sum:%d\n", sum);
	printf("product:%d\n", product);
	system("pause");
	return 0;
}
*/

//输入一行字符,统计之间的英文字母\数字\空格\和其它字符个数
/*int main()
{
	printf("please input a line of characters:\n");
	char str[] = {NULL};
	scanf("%s", str);
	printf("%d\n", strlen(str));
	return 0;
}
*/

//指针数组
void print(int* q[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", q[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 2, 5, 6 };
	int crr[] = { 2, 3, 4, 5 };
	int drr[] = { 1, 2, 3, 4 };
	int* purr[] = {arr,crr,drr};//指针数组->存方指针的数组
	printf("%d\n",*(*purr+1));
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", *(purr[i] + j));
		}
		printf("\n");
	}
	printf("---------------------------------------\n");
	int q[]= { 2, 5, 4, 3, 6,1,7,9,10 };
	int sz = sizeof(q) / sizeof(q[0]);
	print(q,sz);
	system("pause");
	return 0;
}

//数组指针
/*void print(int(*parr)[3], int x, int y)//int(*parr)[3]是用来存储数组的地址
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 3, 5, 4 }, { 9, 5, 1 } };
	print(arr, 3, 3);//在二维数组中变量名就是首地址,该首地址是一维数组的地址,所以传参时要用数组指针接收
	system("pause");
	return 0;
}
*/
