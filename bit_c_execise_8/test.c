#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "add.h"//""�����Լ�����ĺ��� <>���ÿ⺯��
//int Add(int x, int y);//��������
void print(unsigned int a) {
if(a > 9){
	print(a / 10);
}
printf("%d ", a % 10);

}
//int my_strlen(char* s) {
//
//	int count = 0;
//	if (*s != '\0') {
//		count++;
//		s++;
//	
//	}
//	return count;
//}
int my_strlen(char* s) {

	if (*s != '\0') {
		return 1 + my_strlen(s + 1);
	}
	else {
		return 0;
	}
	
}
int Fac(int n) {
	if (n <= 1)return 1;
	else
		return n * Fac(n - 1);
}
int Fib(int n) {
	if (n <= 2)return 1;
	else
		return Fib(n-1)+Fib(n-2);
}
//����
int Fib2(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;


}
int main() {

	//int a = 1;
	//int b = 2;
	//int sum = Add(a, b);

	//printf("%d\n", sum);



//�����ݹ�//1.������������//2.ÿ�ε��ú�Խ��Խ�ƽ���������
	//�õ�һ�����ֵĸ���λ
	/*unsigned int num = 0;
	scanf("%u", &num);

	print(num);*/


//��д��������������ʱ���������ַ�������
	/*char arr[10] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);*/
//��n!
	//int n = 0;
	//scanf("%d", &n);
	//int ret = Fac(n);
	//
	//printf("%d", ret);
//쳲��������в��ʺ��õݹ�
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d", ret);

//

	return 0;
}




//int Add(int a,int b) {
//	return a + b;
//}