#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//整型练习
	//int a = --0f1;//err
	/*int b = -0xffff;
	int c = 0011;
	int d = -0Xcdf;
	int e = 017;
	int f = -017;
	int g = 0x5e2;*/
	//int h = -0x48eg;//err 16进制最高f
	//int i = -068;//err
	//int j = 03f;//err
	//浮点数练习;
	//double a = 1.345555;//printf(1.345555e+00)
	//double b = 13455.55;//printf(1.345555e+04)
	//float c = 160.; //printf(160.000000)
	//float d = e3;//err   e前后必须有数,后面不能出现小数;
	//float e = 1e0;//printf( 1.000000)
	//float f = 123e4;//printf( 1230000.000000)
	//float g = 123;//printf( 123.000000)
	//float h = .e5;//err 前面必须有数
	//float i = -.18;
	//float j = 0.0;
	//float k = -1e3;
	//float l = .234;
	//float m = +1e+1;
	//float n = 5e-9.4;//err e后面为整数
	//float o = 03e2;//printf(300.000000)
	//float p = -.60;
	//float q = 12e-4;//printf(0.001200)
	//float r = 123e;//err
	//float r = +2e-1;
	//float = -e3;//err 
	//float s = 5.e-0;//printf(5.000000)
	//float x = -0e3;//printf(-0.000000)
	//printf("%f", x);

	//转义字符;
	/*转义字符 释义
		\ ?    在书写连续多个问号时使用，防止他们被解析成三字母词
		\'     用于表示字符常量'
		\“    用于表示一个字符串内部的双引号
		\\     用于表示一个反斜杠，防止它被解释为一个转义序列符。
		\a     警告字符，蜂鸣
		\b     退格符
		\f     进纸符
		\n     换行
		\r     回车
		\t     水平制表符
		\v     垂直制表符
		\ddd   ddd表示1~3个八进制的数字。 如： \130 X
		\xdd   dd表示2个十六进制数字。 如： \x300*/
	//char s[] = "\abc\"\"";
	//char ss[] = "\"";
	//char sss[] = "\\0";
	char a[] = "\0xa";
	printf("%c", a[1]);
	return 0;
}