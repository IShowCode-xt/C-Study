#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void reverse_string(char* str) {
	int len = strlen(str);
	int left = 0;
	int right = len-1;
	while (left<right) {
	
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}

}
//
int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
void reverse_string2(char* str) {
	int len = my_strlen(str);
	char tmp = str[0];
	str[0]=str[len - 1];
	str[len - 1] ='\0';
	if (my_strlen(str+1) >= 2) 
		reverse_string2(str + 1);
	
	str[len - 1] = tmp;
	
}
int DigitSum(unsigned int n) {

	if (n > 9) {
		return DigitSum(n / 10) + n % 10;
	
	}
	else {
		return n;
	}
}
double Pow(int n, int k) {
	if (k > 0)
		return n * Pow(n, k - 1);
	else if (0 == k)
		return 1.0;
	else
		return 1.0 / Pow(n, k - 1);

}

int main() {
	//getchar()
		/*int ch = 0;
		while ((ch = getchar()) != EOF) {
			putchar(ch);
		}*/

	//char password[20] = { 0 };
	//printf("����������:>");
	//scanf("%s", password);
	//�ѻ����������������
	//while (getchar()!='\n') {
	//	;
	//}
	//printf("��ȷ������(Y/N):>");
	//int ch = getchar();
	//if (ch == 'Y') {

	//	printf("ȷ�ϳɹ�\n");
	//}
	//else {

	//	printf("ȷ��ʧ��\n");

	//}

	//int ch = 0;
	//while ((ch = getchar()) != EOF) {
	//	if (ch < '0' || ch>'9') {
	//		continue;
	//		putchar(ch);
	//	}
	//}



	//������ʽ
	//char arr[20] = "abcdef";
	//����������Ԫ�صĵ�ַ
	//��Ԫ����char����
	//reverse_string(arr);
	//printf("%s\n", arr);

	/*unsigned int num = 1234;
	int ret = DigitSum(num);
	printf("%d\n", ret);*/


	int n = 0;
	int k = 0;
	double ret = Pow(n, k);



	//����
	//��ʼ��һά����
	int arr1[10] = { 1,2,3,4,5,6 };//����ȫ��ʼ��ʣ���Ĭ�ϳ�ʼ��Ϊ0
	int arr2[] = { 1,2,3,4,5,6 };
	char arr3[] = "abc";//'a','b','c','\0'
	char arr4[] = { 'a','b','c' };//'a','b','c'
	//��������Ԫ�ظ���
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	return 0;
}