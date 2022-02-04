#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include<stdlib.h>
char* My_strcpy(char* str1, const char* str2)//接收a和b的地址,b加上const保证赋值的过程中b值不会被改变，增加代码健壮性
{
	char* address = str1;//先定好一开始啊的地址防止改变后地址变化
	//凡是需要解引用时用assert方法断言
	assert(str1 != NULL);
	assert(str2 != NULL);//防止a和b为NULL是程序无法解析

	while (*str1++ = *str2++)
	{
		;
	}
	return address;
}
int main()
{
	char a[] = "################";
	char b[] = "Alinzo";
	My_strcpy(a, b);
	printf("name:%s\n", a); //意思是把b赋给a
	system("pause");
	return 0;
}