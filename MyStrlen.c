#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include<stdlib.h>
int My_strlen(const char* str)//��const��֤���ַ�������ʱ�ַ������Ȳ��ᱻ�ı�
{
	int count = 0;
	//��������Ҫ��֤��Ч��
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