#define _CRT_SECURE_NO_WARNINGS 1
//������
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


//����
//#define MAX 100
//int main() {

//1.���泣��
	/*"abcdef";
	3.14;
	100;*/

//2.const���εĳ�����
//const int num = 100;
	//printf("%d\n", num);
//3.#define ����ı�ʶ������
	//printf("%d\n", MAX);
	//MAX = 200;//err
	//int arr[MAX] = { 0 };


	//return 0;
//}
//4.ö�ٳ���

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

//"abcdef";//�ַ���
	//�ַ������Դ�����ַ�������
	//char arr1[] = "abc";//���ַ���ĩβ����һ��\0,������ַ��������ı�־
	//char arr2[] = { 'a','b','c','\0'};
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//int len1 = strlen(arr1);
	//int len2 = strlen(arr2);
	//printf("len1=%d\nlen2=%d\n", len1,len2);
	//return 0;
//}


//ת���ַ�

//  \0��ת���ַ� 0
//int main() {
//	printf("\0");
//	printf("-------\n");
//	printf("c:\code\test.c");
//	return 0;
//}




//ѡ�����
//int main() {
//
//	int num = 0;
//	printf("��Ҫ�ú�ѧϰ��?��yes=1,no=2��:>");
//	scanf("%d", &num);
//	if (num == 1) {
//		printf("�����offer");
//	
//	}
//	else if(num==2){
//		printf("�ؼ��ֵ�");
//	}
//	else {
//		printf("�������");
//	}
//	return 0;
//}


//����
//int add(int a,int b) {
//	return a + b;
//}
//
//int main() {
//
//	int num1, num2;
//	printf("������������\n");
//	scanf("%d%d", &num1, &num2);
//	int sum = add(num1, num2);
//	printf("%d\n", sum);
//}


//����
int main() 
{
	int arr[10] = { 1,2,3,4,5,6,7 };//����ȫ��ʼ��,ʣ�µ�Ĭ��Ϊ0;
	//arr[0]//�����һ��Ԫ��
	int i = 0;
	while (i <= 9) {
		printf("%d\n", arr[i]);
		i++;
	
	}
	//���������С
	int sz = sizeof(arr) / sizeof(arr[0]);
	//sizeof(arr)���������С10*4 bit
	//sizeof(arr[0])�����һ��Ԫ�ش�С4 bit
	//szΪ����Ԫ�ظ���
	printf("%d\n", sz);

}