#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("hello world��\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, * q[4], k;
//	for (k = 0; k < 4; k++) 
//	{
//		q[k] = &a[k * 3];           //q[4] = { &a[0], &a[3], &a[6], &a[9] }; 
//	} 
//	printf("%d\n", q[3][1]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		} 
//		a++;
//	} 
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//#define INT_PTR int*
//int main()
//{
//
//	typedef int* int_ptr;
//	INT_PTR a, b;
//	int_ptr c, d;
//	return 0;
//}


//#include<stdio.h>
//int my_check(int(*a)[4], int n)   //��һ������ָ��ָ��һ�������ά����ĵ�һ��
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)     //ѭ����
//	{
//		for (j = 0; j < 4; j++) //ѭ����
//		{
//			if (*(*(a + i) + j) == n) //�ж�ÿһ��Ԫ�ص�ֵ
//			{
//				return 1;        //�ҵ��˷���1
//			}  
//		}
//	}
//	return 0;    //û�ҵ�����0
//}
//int main()
//{
//	int arr[4][4] = { {1,2,8,9},
//		              {2,4,9,12},
//		              {4,7,10,13},
//		              {6,8,11,15}};
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	int ret = my_check(arr, num);  //�з���1��û�з���0
//	if (ret)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a += a *= a -= a / 3;
//	printf("%d\n", a);
//	printf("%x", 0x13 & 0x17);
//	return 0;
//}

//#include<stdio.h>
//
//void main()
//{
//	int i = 0;
//	while (i < 10) {
//		printf("%d\n", i);
//		if (i < 1) continue;
//		if (i == 5) break;
//		i++;
//	}
//}


//#include<stdio.h>
//void my_replace(char* x, char* y)
//{
//	char ret[4] = "%20";       //��һ���ַ�����洢�ո���Ҫ�滻������
//	while (*x != '\0')         //ѭ������str1�е�Ԫ��
//	{
//		while (*x == ' ')      //��������ո񣬾�����һ��ѭ��
//		{
//			int i = 0;
//			for (i = 0; i < 3; i++) //��%20�ŵ��ӿո�����������ַ��ռ���
//			{
//				*y = *(ret + i);   //ѭ�����ֱ����%20
//				y++;        //ÿ��һ���ַ���ָ��str2��ָ��������һ��
//			} 
//			x++;     //����ѭ����֮�󣬱�ʾһ���ո��滻��ɣ�x++��ȥ������һ���ַ��Ƿ�Ϊ�ո�
//		}
//		*y = *x;     //���ǿո�ʱ�����θ�ֵ
//		x++;         //����ָ��������
//		y++;
//	}
//}
//int main()
//{
//	char str1[200] = { 0 }; //��������ַ���
//	char str2[256] = { 0 }; //��Ž���ַ���
//	printf("����һ���ַ���:");
//	gets(str1);
//	my_replace(str1, str2);
//	printf("%s", str2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	if (a = 0) 
//	{
//		printf("%d", a - 10);
//	} 
//	else
//	{
//	printf("%d", a++);
//	} 
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char acHello[] = "hello\0world";
//	char acNew[15] = { 0 };
//	strcpy(acNew, acHello);
//	printf("%llu\n", strlen(acNew));
//	printf("%llu\n", sizeof(acHello));
//	return 0;
//}

//���n��쳲���������
#include<stdio.h>
int Fib(int n)
{
	if (n < 3)
	{
		return 1;
	}
	else
	{
		int a1 = 1;            //��һ��
		int a2 = 1;            //�ڶ���
		int i = 0;             //����ѭ������
		int sum = 0;
		for (i = 2; i < n; i++)   //��ڼ���쳲���������ѭ��n-2��
		{
			sum = a1 + a2;    //���һ���ֵ
			a1 = a2;          //�Ѻ�һ���ֵ��ǰһ��
			a2 = sum;
		}
		return sum;
	}
}
int main()
{
	int n = 0;
	printf("������n��ֵ��");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("��%d��쳲�������Ϊ%d\n", n, ret);
	return 0;
}