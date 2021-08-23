#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("hello world！\n");
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
//int my_check(int(*a)[4], int n)   //用一个数组指针指向一个这个二维数组的第一行
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)     //循环行
//	{
//		for (j = 0; j < 4; j++) //循环列
//		{
//			if (*(*(a + i) + j) == n) //判断每一个元素的值
//			{
//				return 1;        //找到了返回1
//			}  
//		}
//	}
//	return 0;    //没找到返回0
//}
//int main()
//{
//	int arr[4][4] = { {1,2,8,9},
//		              {2,4,9,12},
//		              {4,7,10,13},
//		              {6,8,11,15}};
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	int ret = my_check(arr, num);  //有返回1，没有返回0
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
//	char ret[4] = "%20";       //用一个字符数组存储空格需要替换的内容
//	while (*x != '\0')         //循环遍历str1中的元素
//	{
//		while (*x == ' ')      //如果遇见空格，就如另一个循环
//		{
//			int i = 0;
//			for (i = 0; i < 3; i++) //将%20放到从空格处往后的三个字符空间中
//			{
//				*y = *(ret + i);   //循环，分别放入%20
//				y++;        //每放一个字符，指向str2的指针就向后走一步
//			} 
//			x++;     //三次循环完之后，表示一个空格替换完成，x++上去看看下一个字符是否为空格
//		}
//		*y = *x;     //不是空格时，依次赋值
//		x++;         //两个指针往后走
//		y++;
//	}
//}
//int main()
//{
//	char str1[200] = { 0 }; //存放输入字符串
//	char str2[256] = { 0 }; //存放结果字符串
//	printf("输入一个字符串:");
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

//求第n个斐波那契数列
#include<stdio.h>
int Fib(int n)
{
	if (n < 3)
	{
		return 1;
	}
	else
	{
		int a1 = 1;            //第一项
		int a2 = 1;            //第二项
		int i = 0;             //控制循环次数
		int sum = 0;
		for (i = 2; i < n; i++)   //求第几个斐波那契数就循环n-2次
		{
			sum = a1 + a2;    //求后一项的值
			a1 = a2;          //把后一项的值给前一项
			a2 = sum;
		}
		return sum;
	}
}
int main()
{
	int n = 0;
	printf("请输入n的值：");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("第%d个斐波那契数为%d\n", n, ret);
	return 0;
}