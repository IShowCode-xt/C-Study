#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//第一章 c的基本知识
//c程序的执行是从本函数的main函数开始,到main函数结束
//c语言的源程序必须通过"编译"和"连接"后才能被计算机执行
//c语言源程序文件的后缀是.c;经过编译后,生成文件的后缀是.obj;经过连接后生成的是.exe

//第二章 数据类型、运算符与表达式
//1.标识符
//由数字、字母、下划线组成，开头不能是数字
int a = 160;
int b = -0xffff;
int c = 011;
int d = -0xcdf;
//int e = 01a;err
int f = 0xe;
int g = -01;
//int h = 986, 012;err
int i = -0x48a;
//e与E都可以,e或E之后不能出现小数,e或E之前必须有数;
int r = 2e5;












int main() {
	printf("%d\n", g);
	return 0;
}

