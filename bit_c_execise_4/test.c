#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 100
 /*int Add(int a, int b) {
	 return a + b;
 }*/
 //#define �����
//#define Add(x,y)  ((x)+(y))
//int main() {
	//#define ���峣���ͺ�
	/*printf("%d\n", MAX);*/
//	int a = 10;
//	int b = 20;
//int sum=Add(a, b);
//printf("%d\n", sum);
//	return 0;
//}

//ָ��

//%s--�ַ���
//%c--�ַ�
//%d--�з��ŵ�����
//%f--�����ȸ�����
//%lf--˫���ȸ�����
//%p--��ַ -��ַ��16���Ʊ�ʾ��ʽ
//int main() {
	//int a = 10;
	//&a��ʱ��,ȡ������a��ռ�ڴ���4���ֽڵĵ�һ���ֽڵĵ�ַ

	//printf("%p\n", a);
	//int * pa = &a;
	//paΪָ��
	//*pa = 20;//*������
	//printf("%d\n", a);

	/*return 0;*/
//}


	//ָ���С
	//32λ������:ָ���СΪ4�ֽ�
	//64λ������:ָ���СΪ8�ֽ�
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


//�ṹ��
//�������
//����+����+���
//struct Book {
//
//	char name[30];
//	float price;
//	char id[20];
//
//};
//int main() {
//	struct Book b1 = { "c�������",55.05f,"c1000" };
//	struct Book b2 = { "���ݽṹ",65.05f,"c1001" };
//	struct Book b3 = { "����ϵͳ",75.05f,"c1002" };
//
//	printf("������%s\n", b1.name);
//	printf("�۸�%f\n", b1.price);
//	printf("��ţ�%s\n", b1.id);
//	struct Book* pb = &b1;
//	printf("%p\n", pb);
//
//	printf("������%s\n", pb->name);
//	printf("�۸�%f\n", pb->price);
//	printf("��ţ�%s\n", pb->id);
//
//	printf("������%s\n", (*pb).name);//pb->name
//	printf("�۸�%f\n", (*pb).price);
//	printf("��ţ�%s\n", (*pb).id);
//	return 0;
//}


//��֧�ṹ��ѭ���ṹ

//��֧
int main() {
	//if
/*	int age = 20;
	if (age >= 18)
		printf("����");*/ 


	//if else
	//if (age >= 18)
	//	printf("����");
	//else {
	//	printf("δ����");

	//}


	//if() else if() else
	/*if (age < 18) {
		printf("δ����");
	}
	else if (age >= 18 && age < 30) {
		printf("����");
	}
	else if (age >= 30 && age < 55) {
		printf("����");

	}
	else {
		printf("����");
	}*/
	//c����0��ʾ��  ��0��ʾ��
	//else Ĭ�������������Ŀ���ƥ���ifƥ��


	//�����ʽС����
	//int a = 2;

	//if (2 == a) {//������a=2ʱҲ��ʹ��������ȥ,��д��2=aʱ��������,������������׷��ִ���
	//	return 1;
	//}
	//else {
	//
	//	return 2;
	//}
	//return 0;
//}
