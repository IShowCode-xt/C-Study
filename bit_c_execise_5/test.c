#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//分支语句后续


//switch
//int main() {
	//int day = 0;
	//scanf("%d", &day);
	//switch (day) {//switch后面必须接整型
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("请输入1-7的数字");
//		break;
//	}
//
//	return 0;
//}



//循环语句

int main() {
	//while()
	//int i = 1;
	//while (i<=10) {
		//if (5 == i)
			//break;//终止整个循环
			//continue;//终止本次循环开始下次循环

		//printf("%d\n", i);
		//i++;
	//}




	//for()

	//for (int i = 0; i <= 10; i++) {
	//	if (5 == i)
	//		//break;//终止整个循环
	//		continue;//终止本次循环开始下次循环
	//	printf("%d\n", i);
	//}

	//for循环变种
	/*for (;;) {
		printf("死循环");
	}*/
	/*int i = 0;
	int j = 0;
	for (; i < 10; i++) {
		for (; j < 10; j++) {
			printf("10个hehe\n");
		}
	}*/


	//遍历数组
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

	//练习
	//n的阶乘
	//printf("请输入一个数字代表改数字的阶乘:>");
	//int num = 0;
	//scanf("%d", &num);	
	//int j = 1;
	//int i = 0;
	//for (i = 1; i < num + 1; i++) 
	//	j *= i;
	//printf("%d的阶乘是%d", num, j);



	//计算1！+2！+3！+....+n!
	//printf("请输入一个数字代表1-改数字的阶乘之和:>");
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
	//printf("%d的阶乘之和是%d", num, sum);

	//一层循环
	//printf("请输入一个数字代表1-改数字的阶乘之和:>");
	//int num = 0;
	//scanf("%d", &num);
	//int sum = 0;
	//int ji = 1;
	//for (int i = 1; i <= num; i++) {
	//	ji *= i;
	//	sum += ji;
	//}
	//printf("%d的阶乘之和是%d", num, sum);

	//查找数组中的一个数7
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
		printf("找到了下标为%d\n", i);
		
	}
	else {
		printf("没找到\n");
	}*/

	//有序的数组可以通过二分法来查找

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
		printf("找到了下表为%d", mid);
	}
	else {
		printf("没找到");
	}*/

//实现下面的效果
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


//模拟用户登录输入3次密码
	 int i = 1;
//假设真实的密码是123456
	char password[20] = { 0 };
	for (i = 1; i <= 3; i++) {
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {//2个字符串相比较是不能用==,而用strcmp();相等strcmp会返回0
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码错误,请再次输入(您还有%d次机会))\n",3-i);
			if (i == 3) {
				printf("3次密码错误,请1分钟后再次输入密码\n");
			}
		}
	}
	






	return 0;
}