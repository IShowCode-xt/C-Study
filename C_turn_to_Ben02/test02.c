#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//������ϰ
	//int a = --0f1;//err
	/*int b = -0xffff;
	int c = 0011;
	int d = -0Xcdf;
	int e = 017;
	int f = -017;
	int g = 0x5e2;*/
	//int h = -0x48eg;//err 16�������f
	//int i = -068;//err
	//int j = 03f;//err
	//��������ϰ;
	//double a = 1.345555;//printf(1.345555e+00)
	//double b = 13455.55;//printf(1.345555e+04)
	//float c = 160.; //printf(160.000000)
	//float d = e3;//err   eǰ���������,���治�ܳ���С��;
	//float e = 1e0;//printf( 1.000000)
	//float f = 123e4;//printf( 1230000.000000)
	//float g = 123;//printf( 123.000000)
	//float h = .e5;//err ǰ���������
	//float i = -.18;
	//float j = 0.0;
	//float k = -1e3;
	//float l = .234;
	//float m = +1e+1;
	//float n = 5e-9.4;//err e����Ϊ����
	//float o = 03e2;//printf(300.000000)
	//float p = -.60;
	//float q = 12e-4;//printf(0.001200)
	//float r = 123e;//err
	//float r = +2e-1;
	//float = -e3;//err 
	//float s = 5.e-0;//printf(5.000000)
	//float x = -0e3;//printf(-0.000000)
	//printf("%f", x);

	//ת���ַ�;
	/*ת���ַ� ����
		\ ?    ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��
		\'     ���ڱ�ʾ�ַ�����'
		\��    ���ڱ�ʾһ���ַ����ڲ���˫����
		\\     ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���
		\a     �����ַ�������
		\b     �˸��
		\f     ��ֽ��
		\n     ����
		\r     �س�
		\t     ˮƽ�Ʊ��
		\v     ��ֱ�Ʊ��
		\ddd   ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130 X
		\xdd   dd��ʾ2��ʮ���������֡� �磺 \x300*/
	//char s[] = "\abc\"\"";
	//char ss[] = "\"";
	//char sss[] = "\\0";
	char a[] = "\0xa";
	printf("%c", a[1]);
	return 0;
}