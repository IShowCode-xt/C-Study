#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//stdio.h ��һ��ͷ�ļ�
//std ��׼ i input o output
//��׼���������ͷ�ļ�
//int main() {
//
//ʵ�����еĴ���
//��ӡhello world��
//	printf("Hello World");
//	return 0;
//}


//int main() {
//
//print - %d -��������ʽ��ӡ
//	printf("%d\n", 100);
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	int age = 20;//�ڴ��Ϸָ�4���Լ��Ŀռ�
//	char c = 'w';//�ڴ��Ϸָ�1���Լ��Ŀռ�
//
//
//	return 0;
//}
//����
//ȫ�ֱ���
//�ֲ�����
//ȫ�ֱ���-�ڴ������ⲿ����ı�������ȫ�ֱ���
//int a = 100;
//int mian() {
//
//�ֲ�����-������ڲ�����ı������Ǿֲ�����
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//}


int main() {

	int num1;
	int num2;
	scanf("%d%d", &num1, &num2);//&ȡ��ַ
	int sum = 0;
	sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}