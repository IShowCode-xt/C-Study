#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//��֧������


//switch
//int main() {
	//int day = 0;
	//scanf("%d", &day);
	//switch (day) {//switch������������
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("������1-7������");
//		break;
//	}
//
//	return 0;
//}



//ѭ�����

int main() {
	//while()
	//int i = 1;
	//while (i<=10) {
		//if (5 == i)
			//break;//��ֹ����ѭ��
			//continue;//��ֹ����ѭ����ʼ�´�ѭ��

		//printf("%d\n", i);
		//i++;
	//}




	//for()

	//for (int i = 0; i <= 10; i++) {
	//	if (5 == i)
	//		//break;//��ֹ����ѭ��
	//		continue;//��ֹ����ѭ����ʼ�´�ѭ��
	//	printf("%d\n", i);
	//}

	//forѭ������
	/*for (;;) {
		printf("��ѭ��");
	}*/
	/*int i = 0;
	int j = 0;
	for (; i < 10; i++) {
		for (; j < 10; j++) {
			printf("10��hehe\n");
		}
	}*/


	//��������
	//int arr[10] = { 1,2,3,4,5,6,7,8 };
	//for (int i = 0; i < 10; i++) {
	//
	//	printf("arr[%d]=%d\n", &i, &arr[i]);
	//
	//}


	//do  while
	//int i = 1;
	//do {
	//	printf("%d", i);
	//	i++;
	//} while (i <= 10);

	//��ϰ
	//n�Ľ׳�
	//printf("������һ�����ִ�������ֵĽ׳�:>");
	//int num = 0;
	//scanf("%d", &num);	
	//int j = 1;
	//int i = 0;
	//for (i = 1; i < num + 1; i++) 
	//	j *= i;
	//printf("%d�Ľ׳���%d", num, j);



	//����1��+2��+3��+....+n!
	//printf("������һ�����ִ���1-�����ֵĽ׳�֮��:>");
	//int num = 0;
	//scanf("%d", &num);
	//int sum = 0;

	//for (int p = 1; p <= num; p++) {
	//	int ji = 1;
	//	for (int i = 1; i < p + 1; i++) {;
	//		ji *= i;
	//	}
	//	sum += ji;
	//}
	//printf("%d�Ľ׳�֮����%d", num, sum);

	//һ��ѭ��
	//printf("������һ�����ִ���1-�����ֵĽ׳�֮��:>");
	//int num = 0;
	//scanf("%d", &num);
	//int sum = 0;
	//int ji = 1;
	//for (int i = 1; i <= num; i++) {
	//	ji *= i;
	//	sum += ji;
	//}
	//printf("%d�Ľ׳�֮����%d", num, sum);

	//���������е�һ����7
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int flag = 0;
	int i = 0;
	for (i = 0; i < sz; i++) {
		if (7 == arr[i]) {
			flag = 1;
			break;
		}
	
	}
	if (flag == 1) {
		printf("�ҵ����±�Ϊ%d\n", i);
		
	}
	else {
		printf("û�ҵ�\n");
	}*/

	//������������ͨ�����ַ�������

	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int flag = 0;
	int mid = 0;
	int left = 0;
	int right = sz - 1;

	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] < 7) {
			left = mid + 1;
		}
		else if (arr[mid] > 7) {
			right = mid - 1;
		}
		else {
			flag = 1;
			break;
		}
	}
	if (1 == flag) {
		printf("�ҵ����±�Ϊ%d", mid);
	}
	else {
		printf("û�ҵ�");
	}*/

//ʵ�������Ч��
//################
//H##############!
//He############!!
//Hel##########!!!
//.
//.
//.
//Hello Summer!!!!
//char arr1[] = "Hello Summer!!!!";
//char arr2[] = "################";
//int sz =strlen(arr2);
//int left = 0;
//int right = sz - 1;
//printf("%s\n", arr2);
//while (left <= right) {	
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	left++;
//	right--;
//	Sleep(1000);
//}

//################
//H##############!
//He############!!
//Hel##########!!!
//Hell########!!!!
//Hello######r!!!!
//Hello ####er!!!!
//Hello S##mer!!!!
//Hello Summer!!!!


//ģ���û���¼����3������
	 int i = 1;
//������ʵ��������123456
	char password[20] = { 0 };
	for (i = 1; i <= 3; i++) {
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {//2���ַ�����Ƚ��ǲ�����==,����strcmp();���strcmp�᷵��0
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("�������,���ٴ�����(������%d�λ���))\n",3-i);
			if (i == 3) {
				printf("3���������,��1���Ӻ��ٴ���������\n");
			}
		}
	}
	






	return 0;
}