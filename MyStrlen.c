#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include<stdlib.h>
int My_strlen(const char* str)//加const保证在字符串计算时字符串长度不会被改变
{
	int count = 0;
	//解引用需要保证有效性
	assert(str != NULL);
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "Alinzo";
	int len = My_strlen(arr);
	printf("%d\n", len);
	system("pause");
	return 0;
}