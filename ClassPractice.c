#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//��׳�֮�� 1!+2!+3!+4!+.....+n!
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


//100��90������ ���� �е� ������
/*int main()
{
	int grade = 0;
	printf("please input your score\n");
	scanf("%d",&grade);
	switch (grade)
	{
	case 10:
	case 9:
		printf("����\n");
		break;
	case 8:
		printf("����\n");
		break;
	case 7:
		printf("�е�\n");

	}

}
*/

//���㣺1 + 2^2 + 3^2+....+100^2 

/*int main()
{
	long s = 0;
	int i, j = 1;
	s = 0;//��s�ٴ�ʹ��ʱ��ʼΪ0
	for (i = 1; i <= 100; i++)
	{
		j = i*i;
		s = s + j;
	}
	printf("��������:%d\n", s);
	system("pause");
}
*/
/*
int main()
{
	float x, y;
	x = 3.5;
	y = 4.6;
	printf("��x��ǿ������ת��:%f\n", (int)x + y);
	printf("��y+x��ǿ������ת��:%d\n", (int)(x + y));
	system("pause");
}
*/


/*int main()
{
	char arr1[] = "I am a handsome";
		char arr2[] = { 's', 'a', 'd' };

	printf("sizeof(arr1)=%d\n", sizeof(arr1));    //���Ͽո��'\0'Ϊ16

	//�ֽ�ʱ�����������ֽڣ��ڴ���ṩ�����ֽڣ�������'\0'���Խ��Ϊ3
	printf("sizeof(arr2)=%d\n", sizeof(arr2));   

	printf("strlen(arr1)=%d\n", strlen(arr1));    //���ֽڳ��ȣ�15

	//���ֽڳ��ȣ����ֵ�������ڳ�
	//ʼ��ʱû���ṩ'\0',���������ַ�'d'ʱ��
	//�����ִ�У�ֱ����������������'\0'ֹͣ�����Խ���������ֵ
	printf("strlen(arr2)=%d\n", strlen(arr2));
	system("pause");
	return 0;
}*/



//����n�Ľ׳�
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
	printf("������׳ˣ�\n");
	scanf("%d", &n);
	int sum = 0;
	int i = 0;
	
	for (i = 1; i <= n; i++)
	{
		sum = sum + func(i);
	}
	printf("�׳�֮��Ϊ:%d\n", sum);
	system("pause");
	return 0;
}
*/

//��1��100֮�������֮��,ż��֮��
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

//����һ���ַ�,ͳ��֮���Ӣ����ĸ\����\�ո�\�������ַ�����
/*int main()
{
	printf("please input a line of characters:\n");
	char str[] = {NULL};
	scanf("%s", str);
	printf("%d\n", strlen(str));
	return 0;
}
*/

//ָ������
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
	int* purr[] = {arr,crr,drr};//ָ������->�淽ָ�������
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

//����ָ��
/*void print(int(*parr)[3], int x, int y)//int(*parr)[3]�������洢����ĵ�ַ
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
	print(arr, 3, 3);//�ڶ�ά�����б����������׵�ַ,���׵�ַ��һά����ĵ�ַ,���Դ���ʱҪ������ָ�����
	system("pause");
	return 0;
}
*/
