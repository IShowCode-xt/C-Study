#define _CRT_SECURE_NO_WARNINGS 1
//猜数字小游戏
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
//1.生成随机数
//2.猜数字
//	int gess = 0;
//	int ret = rand()%100+1;
//	
//	while (1) {
//		printf("请输入数字:>");
//		scanf("%d", &gess);
//		if (gess < ret) {
//			printf("猜小了\n");
//			
//		}
//		else if (gess > ret) {
//			printf("猜大了\n");
//		
//		}
//		else {
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//
//}
  int main() {
//	int input = 0;
//	//设置随机数的生成起点--不要频繁调用
//	srand((unsigned int)time(NULL));//time(null)获得时间戳
//
//
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			printf("猜数字\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("请输入1 / 0\n");
//		}
//	} while (input);













	//goto语句
 /* flag:
	  printf("来这了\n");
	  printf("来这了\n");
	  printf("来这了\n");

	  goto flag;*/




	  //关机程序
	  //只要程序运行起来,电脑就倒计时1分钟
	  //1分钟后就关机;如果在1分钟内输入:我是猪,就取消关机;
	  //倒计时60s关机 shutdown -s -t 60
	  //shutdown -a 取消关机
	  char input[20] = { 0 };
	  system("shutdown -s -t 60");
	  
  again:
	  printf("注意,你的电脑将在1分钟后自动关机，如果输入我是猪，将取消关机\n");
	  scanf("%s", input);
	  //判断用户是否输入我是猪
	  if (strcmp(input, "我是猪") == 0) {
		  system("shutdown -a");
	  }
	  else {
		  goto again;
	  }

	return 0;
}