#define _CRT_SECURE_NO_WARNINGS 1
//函数
#include <stdio.h>
#include <string.h>
#include <math.h>
void get_Max(int a, int b) {

	if (a >= b) {
		printf("较大值为%d\n", a);

	}
	else {
		printf("较大值为%d\n", b);
	}
}
void swap1(int a,int b) {

	int temp = 0;
	printf("交换前 a=%d b=%d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("交换后 a=%d b=%d\n", a, b);
}
void swap2(int* pa, int* pb) {

	int temp = 0;
	printf("交换前 a=%d b=%d\n", *pa, *pb);
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	printf("交换后 a=%d b=%d\n", *pa, *pb);
}
int is_prime(int n) {
	//判断2-sqrt(n)
	int j = 0;
	for (j = 2; j <= sqrt(n); j++) {
		if (n % j == 0) {
			return 0;
		}

	}
	return 1;

}
int main() {
	//strcpy
	//char arr1[20] = { 0 };
	//char arr2[] = "hello";
	//strcpy(arr1, arr2);

	//printf("%s\n", arr1);


	//memset
	//char arr3[] = "hello summer";
	//char* ret = memset(arr3, 'x', 5);//以字节来初始化
	//printf("%s\n", ret);


	//自定义函数
	//输出较大值
	/*int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	get_Max(a,b);*/
	//交换数字
	//int d = 1;
	//int f = 2;
	//swap1(d, f);
	//swap2(&d, &f);
	//return 0;
	

	//练习
	//1.判断是否为素数
	int a = 0;
	printf("输入一个数字:>");
	scanf("%d", &a);
	printf("%f", sqrt(a));
	if (is_prime(a) == 1) {
		printf("该数是素数");
	}
	else {
		printf("该数不是素数");
	}

	
}