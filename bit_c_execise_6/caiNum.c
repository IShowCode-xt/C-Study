#define _CRT_SECURE_NO_WARNINGS 1
//������С��Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void menu() {
	printf("***************************\n");
	printf("*******1 . Play************\n");
	printf("*******0 . Exit************\n");
	printf("***************************\n");
}
//void game() {
//1.���������
//2.������
//	int gess = 0;
//	int ret = rand()%100+1;
//	
//	while (1) {
//		printf("����������:>");
//		scanf("%d", &gess);
//		if (gess < ret) {
//			printf("��С��\n");
//			
//		}
//		else if (gess > ret) {
//			printf("�´���\n");
//		
//		}
//		else {
//			printf("�¶���\n");
//			break;
//		}
//	}
//
//
//}
  int main() {
//	int input = 0;
//	//������������������--��ҪƵ������
//	srand((unsigned int)time(NULL));//time(null)���ʱ���
//
//
//	do {
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			printf("������\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("������1 / 0\n");
//		}
//	} while (input);













	//goto���
 /* flag:
	  printf("������\n");
	  printf("������\n");
	  printf("������\n");

	  goto flag;*/




	  //�ػ�����
	  //ֻҪ������������,���Ծ͵���ʱ1����
	  //1���Ӻ�͹ػ�;�����1����������:������,��ȡ���ػ�;
	  //����ʱ60s�ػ� shutdown -s -t 60
	  //shutdown -a ȡ���ػ�
	  char input[20] = { 0 };
	  system("shutdown -s -t 60");
	  
  again:
	  printf("ע��,��ĵ��Խ���1���Ӻ��Զ��ػ������������������ȡ���ػ�\n");
	  scanf("%s", input);
	  //�ж��û��Ƿ�����������
	  if (strcmp(input, "������") == 0) {
		  system("shutdown -a");
	  }
	  else {
		  goto again;
	  }

	return 0;
}