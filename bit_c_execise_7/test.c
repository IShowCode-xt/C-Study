#define _CRT_SECURE_NO_WARNINGS 1
//����
#include <stdio.h>
#include <string.h>
#include <math.h>
void get_Max(int a, int b) {

	if (a >= b) {
		printf("�ϴ�ֵΪ%d\n", a);

	}
	else {
		printf("�ϴ�ֵΪ%d\n", b);
	}
}
void swap1(int a,int b) {

	int temp = 0;
	printf("����ǰ a=%d b=%d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("������ a=%d b=%d\n", a, b);
}
void swap2(int* pa, int* pb) {

	int temp = 0;
	printf("����ǰ a=%d b=%d\n", *pa, *pb);
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	printf("������ a=%d b=%d\n", *pa, *pb);
}
int is_prime(int n) {
	//�ж�2-sqrt(n)
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
	//char* ret = memset(arr3, 'x', 5);//���ֽ�����ʼ��
	//printf("%s\n", ret);


	//�Զ��庯��
	//����ϴ�ֵ
	/*int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	get_Max(a,b);*/
	//��������
	//int d = 1;
	//int f = 2;
	//swap1(d, f);
	//swap2(&d, &f);
	//return 0;
	

	//��ϰ
	//1.�ж��Ƿ�Ϊ����
	int a = 0;
	printf("����һ������:>");
	scanf("%d", &a);
	printf("%f", sqrt(a));
	if (is_prime(a) == 1) {
		printf("����������");
	}
	else {
		printf("������������");
	}

	
}