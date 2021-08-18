#define _CRT_SECURE_NO_WARNINGS 1
//作用域
#include <stdio.h>
#include <string.h>
//int main() {
//
//	{int a = 10;
//	printf("%d\n", a);
//	}
	//printf("%d\n", a);err
//return 0;
//}

//
//int b = 0;
//void test() {
//	printf("%d\n", b);
//}
//int main() {
//
//	printf("%d\n", b);
//	test();
//	return 0;
//}


//常量
//#define MAX 100
//int main() {

//1.字面常量
	/*"abcdef";
	3.14;
	100;*/

//2.const修饰的常变量
//const int num = 100;
	//printf("%d\n", num);
//3.#define 定义的标识符常量
	//printf("%d\n", MAX);
	//MAX = 200;//err
	//int arr[MAX] = { 0 };


	//return 0;
//}
//4.枚举常量

//enum Sex {
//	MALE,
//   FEMALE,
//   SECRET
//};
//
//int main() {
//	enum Sex s = FEMALE;
//}



//int main() {

//"abcdef";//字符串
	//字符串可以存放在字符数组中
	//char arr1[] = "abc";//在字符串末尾隐藏一个\0,这个是字符串结束的标志
	//char arr2[] = { 'a','b','c','\0'};
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//int len1 = strlen(arr1);
	//int len2 = strlen(arr2);
	//printf("len1=%d\nlen2=%d\n", len1,len2);
	//return 0;
//}


//转义字符

//  \0是转义字符 0
//int main() {
//	printf("\0");
//	printf("-------\n");
//	printf("c:\code\test.c");
//	return 0;
//}




//选择语句
//int main() {
//
//	int num = 0;
//	printf("你要好好学习吗?（yes=1,no=2）:>");
//	scanf("%d", &num);
//	if (num == 1) {
//		printf("给你好offer");
//	
//	}
//	else if(num==2){
//		printf("回家种地");
//	}
//	else {
//		printf("输入错误");
//	}
//	return 0;
//}


//函数
//int add(int a,int b) {
//	return a + b;
//}
//
//int main() {
//
//	int num1, num2;
//	printf("请输入两个数\n");
//	scanf("%d%d", &num1, &num2);
//	int sum = add(num1, num2);
//	printf("%d\n", sum);
//}


//数组
int main() 
{
	int arr[10] = { 1,2,3,4,5,6,7 };//不完全初始化,剩下的默认为0;
	//arr[0]//数组第一个元素
	int i = 0;
	while (i <= 9) {
		printf("%d\n", arr[i]);
		i++;
	
	}
	//计算数组大小
	int sz = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr)计算数组大小10*4 bit
	//sizeof(arr[0])计算第一个元素大小4 bit
	//sz为数组元素个数
	printf("%d\n", sz);

}