#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//stdio.h 是一个头文件
//std 标准 i input o output
//标准输入输出的头文件
//int main() {
//
//实际运行的代码
//打印hello world；
//	printf("Hello World");
//	return 0;
//}


//int main() {
//
//print - %d -以整型形式打印
//	printf("%d\n", 100);
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	int age = 20;//内存上分给4个自己的空间
//	char c = 'w';//内存上分给1个自己的空间
//
//
//	return 0;
//}
//变量
//全局变量
//局部变量
//全局变量-在大括号外部定义的变量就是全局变量
//int a = 100;
//int mian() {
//
//局部变量-代码块内部定义的变量就是局部变量
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//}


int main() {

	int num1;
	int num2;
	scanf("%d%d", &num1, &num2);//&取地址
	int sum = 0;
	sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}