#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//算术操作符
int main() {

	//int a = 7 / 2;
	//int b = 7 % 2;//取模
	//printf("%d\n", a);
	//float c = 7 / 2.0;
	//printf("%f\n", c);
	//移位操作符
	//int a = 12;//4字节 32位
	//int b=a << 1;//左移操作符  000000000000000000000000000000001100 -》000000000000000000000000000000011000
	//相当于*2;
	//右移/2;
	//位操作符
	//& | ^
	//int a = 3;
	//int b = 5;
	//int c = a & b;//011& 101 =001  按位与
	//int d = a | b;//011 |101=111   按位或
	//int f = a ^ b;//011^101=110       按位异或  相同为0；相异为1

	//赋值操作符
	// += -= /= %= &= |= ^= *=


	//单目操作符
	//! - + &(取地址) sizeof() ~(对一个二进制数按位取反) -- ++ *（解引用） 
	



	//关系操作符
	//> >= < <= != ==

	//逻辑操作符
	//&& ||  逻辑与  逻辑或

	//条件操作符
	// 	   int a=1;
	// 	   int b=2;
	//int max=a>b?a:b;

	//逗号表达式
	//exp1,exp2,exp3,exp4
	/*int a = 3;
	int b = 5;
	int c = 6;*/
	//逗号表达式-从左到右依次计算，整个表达式的结果是最后一个表达式的结果
	/*int d = (a -= 2, b = a + c, c = a - b);*/


	//int arr[]={1,2,3,4,5,6};
	//arr[4];//[] -下标引用
	

	//() 函数调用操作符


	//关键字
	//auto -修饰局部变量  auto int a; 一般省略
	//break -循环,switch
	//case 0-switch
	//char 
	//const 
	//continue
	//default -分支 switch
	//else
	//do
	// double
	//enum
	//extern -生命
	//float
	//for
	//goto
	//if
	//register-寄存器
	//int
	//long
	//short
	//signed
	//unsigned
	//static静态 三种用法  1.static修饰局部变量(改变局部变量的生命周期 作用域还是局部) 2.static修饰全局变量(改变全局变量失去外部链接属性变成内部链接属性) 3.static修饰函数（与第二种相似只是换成函数）
	//return
	//struct
	//typedef-别名  typedef unsigned uint;  unit int a=20; 
	//union
	//void
	//volatile
	// while
	//



}