#define _CRT_SECURE_NO_WARNINGS 1
//������Ϊʲô
//#include<stdio.h>
//int main()
//{
//	char a[20];
//	char* p1 = (char*)a;
//	char* p2 = (char*)(a + 5);
//	int n = p2 - p1;
//	printf("%d", n);
//	return 0;
//}

//������Ϊʲô
//#include<stdio.h>
//#define F(X,Y) ((X)+(Y))
//int main()
//{
//	int a = 3, b = 4;
//	int x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
//	printf("%d\n", F(a++, b++));
//	printf("%d", x);
//	return 0;
//}

//������Ϊʲô
//#include<stdio.h>
//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		short a;
//		char d;
//		long b;
//		long c;
//	};
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//	struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//	return 0;
//} 
//#pragma pack()
 

//������Ϊʲô
//#include<stdio.h>
//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 5,
//	A1,
//	B1
//};
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d\n", enumA);
//	printf("%d\n", enumB);
//	return 0;
//}


//������Ϊʲô
//#include<stdio.h>
//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//} 
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d,", k);
//	k = fun(j, m);
//	printf("%d/n", k);
//	return;
//}


//дһ���������� unsigned int �ͱ��� x ���ڴ��ж����� 1 �ĸ���
//#include<stdio.h>
//unsigned int check_bit_1(unsigned int x)
//{
//	int i = 0;
//	unsigned int count = 0;
//	for (i = 0; i < 32; i++)        //�����ұ�һλ��ʼ�ж�
//	{
//		if ((x >> i) & 1 == 1)      //�����1��λ��Ľ����1�����ʾ��λ�ϵ�����Ϊ1
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	unsigned int x = 0;
//	printf("������һ��ֵ��");
//	scanf("%u", &x);
//	unsigned int ret = check_bit_1(x);
//	printf("%u", ret);
//	return 0;
//}

//������Ϊʲô
//#include<stdio.h>
//int Change(int* pX)
//{
//	int y = 8;
//	y = y - *pX;
//	pX = &y;
//	return 0;
//} 
//int main()
//{
//	int xx = 3;
//	int* pY = &xx;
//	Change(pY);
//	printf("%d\n", *pY);
//	return 0;
//}

//������Ϊʲô
//#include<stdio.h>
//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//������Ϊʲô
//#include<stdio.h>
//int fun(int x)
//{
//	int count = 0;
//	while (x) {
//		count++;
//		x = x & (x - 1); //�����Ͼ���ÿ���������ұߵĶ�����λ1
//	}
//	return count;
//} 
//int main()
//{
//	printf("fun(2017)=%d\n", fun(2019));
//}

//������Ϊʲô
//#include<stdio.h>
//#define CIR(r) r* r
//void main()
//{
//	int a = 1;
//	int b = 2;
//	int t, h;
//	t = CIR((a + b));  //���� r �滻���� a + b ��ֵ
//	h = CIR(a + b);    //���� r �ֱ��滻 a �� b ��ֵ��������
//	printf("%d/n", t);
//	printf("\n%d/n", h);
//	return;
//}


//#include<stdio.h>
//unsigned long g_ulGlobal = 0;
//void GlobalInit(unsigned long ulArg)
//{
//	ulArg = 0x01;
//	return;
//} 
//void main()
//{
//	GlobalInit(g_ulGlobal);
//	printf("%lu", g_ulGlobal);
//	return;
//}


//�����������Ľ����ʲô
//#include<stdio.h>
//int fun(int a, int b)
//{
//	if (a > b)
//		return(a + b);
//	else
//		return(a - b);
//}
//int main()
//{
//	int x = 3, y = 8, z = 6, r;
//	r = fun(fun(x, y), 2 * z);
//	printf(" %d\n", r);;
//	return 0;
//}

//�������ʲô
//#include<stdio.h>
//int main()
//{
//	int a = 4;
//	a = ++(a++);
//	printf("%d\n", a);
//	return 0;
//}

//�������ʲô
//#include<stdio.h>
//int f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//} 
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++) 
//	{
//		k = f(a++);
//	} 
//	printf("%d\n", k);
//    return 0;
//}


//�������ʲô
//#include<stdio.h>
//int x = 3;
//void inc()
//{
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d", x);
//	return;
//} 
//int main()
//{
//	int i;
//	for (i = 1; i < x; i++) 
//	{
//		inc();
//	} 
//	return 0;
//}

//��������������ʲô
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	if ((++i > 0) || (++j > 0)) {
//		printf("i=%d;j=%d\n", i, j);
//	}
//}


//����������ʲô
#include<stdio.h>
#define PI(x,y) x%y
int main()
{
	int a = 2;
	int b = 2;
	printf("%d\n", PI(b, a + 4));         //b % a + 4
	printf("%d\n", PI(b, (a + 4)));       //b % (a + 4)
	printf("%d\n", PI(b + 1, a + 1));     //b + 1 % a +1
	printf("%d\n", PI((b + 1), (a + 1))); //(b + 1) % (a + 1)
}
