#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include<stdlib.h>
char* My_strcpy(char* str1, const char* str2)//����a��b�ĵ�ַ,b����const��֤��ֵ�Ĺ�����bֵ���ᱻ�ı䣬���Ӵ��뽡׳��
{
	char* address = str1;//�ȶ���һ��ʼ���ĵ�ַ��ֹ�ı���ַ�仯
	//������Ҫ������ʱ��assert��������
	assert(str1 != NULL);
	assert(str2 != NULL);//��ֹa��bΪNULL�ǳ����޷�����

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
	printf("name:%s\n", a); //��˼�ǰ�b����a
	system("pause");
	return 0;
}