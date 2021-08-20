#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 100
 /*int Add(int a, int b) {
	 return a + b;
 }*/
 //#define 定义宏
//#define Add(x,y)  ((x)+(y))
//int main() {
	//#define 定义常量和宏
	/*printf("%d\n", MAX);*/
//	int a = 10;
//	int b = 20;
//int sum=Add(a, b);
//printf("%d\n", sum);
//	return 0;
//}

//指针

//%s--字符串
//%c--字符
//%d--有符号的整型
//%f--单精度浮点数
//%lf--双精度浮点数
//%p--地址 -地址的16进制表示形式
//int main() {
	//int a = 10;
	//&a的时候,取出的是a所占内存中4个字节的第一个字节的地址

	//printf("%p\n", a);
	//int * pa = &a;
	//pa为指针
	//*pa = 20;//*解引用
	//printf("%d\n", a);

	/*return 0;*/
//}


	//指针大小
	//32位环境下:指针大小为4字节
	//64位环境下:指针大小为8字节
	//int main() {
	//	printf("%d\n", sizeof(char*));
	//	printf("%d\n", sizeof(int*));
	//	printf("%d\n", sizeof(short*));
	//	printf("%d\n", sizeof(long*));
	//	printf("%d\n", sizeof(float*));
	//	printf("-----------------------------\n");
	//	printf("%d\n", sizeof(char));
	//	printf("%d\n", sizeof(int));
	//	printf("%d\n", sizeof(short));
	//	printf("%d\n", sizeof(long));
	//	printf("%d\n", sizeof(float));
	//	return 0;
	//}


//结构体
//书的类型
//书名+定价+书号
//struct Book {
//
//	char name[30];
//	float price;
//	char id[20];
//
//};
//int main() {
//	struct Book b1 = { "c程序设计",55.05f,"c1000" };
//	struct Book b2 = { "数据结构",65.05f,"c1001" };
//	struct Book b3 = { "操作系统",75.05f,"c1002" };
//
//	printf("书名：%s\n", b1.name);
//	printf("价格%f\n", b1.price);
//	printf("书号：%s\n", b1.id);
//	struct Book* pb = &b1;
//	printf("%p\n", pb);
//
//	printf("书名：%s\n", pb->name);
//	printf("价格%f\n", pb->price);
//	printf("书号：%s\n", pb->id);
//
//	printf("书名：%s\n", (*pb).name);//pb->name
//	printf("价格%f\n", (*pb).price);
//	printf("书号：%s\n", (*pb).id);
//	return 0;
//}


//分支结构和循环结构

//分支
int main() {
	//if
/*	int age = 20;
	if (age >= 18)
		printf("成年");*/ 


	//if else
	//if (age >= 18)
	//	printf("成年");
	//else {
	//	printf("未成年");

	//}


	//if() else if() else
	/*if (age < 18) {
		printf("未成年");
	}
	else if (age >= 18 && age < 30) {
		printf("青年");
	}
	else if (age >= 30 && age < 55) {
		printf("中年");

	}
	else {
		printf("老年");
	}*/
	//c语言0表示假  非0表示真
	//else 默认与它离的最近的可以匹配的if匹配


	//编码格式小技巧
	//int a = 2;

	//if (2 == a) {//当出现a=2时也会使程序走下去,而写成2=a时会编译错误,这样会更加容易发现错误
	//	return 1;
	//}
	//else {
	//
	//	return 2;
	//}
	//return 0;
//}
