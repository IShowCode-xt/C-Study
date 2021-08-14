#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1) {
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d%d%d", a, b, c);
//	double a = 1.1;
//	printf("%lf\n", a);
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//		break;
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//int m(int a,int b) {
//	if (a % b == 0) {
//		return a > b ? b : a;
//		
//	}
//	else {
//		if (b != 0) {
//			m(b, a % b);
//		}
//		else {
//			return a;
//		}
//		
//	}
//}
//
//int main() {
//	int a, b;
//	scanf("%d%d", &a,& b);
//	int p = m(a, b);
//	printf("最大公约数为:%d\n", p);
//	return 0;
//}
//int main() {
//	int num = 0;
//	for (int i = 1000; i <= 2000; i++) {
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
//			num++;
//			printf("%d--%d\n", i,num);
//		}
//	}
//	return 0;
//}
//int main() {
//	int num = 101;
//	for (int i = 100; i <= 200; i++) {
//		for (int j = i - 1; j > 1; j--) {
//			if (i % j == 0) {
//				num--;
//				break;
//			}
//			
//		}
//		
//	}
//	printf("%d\n", num);
//}
//int main() {
//	int count = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	printf("%d", count);
//}
//int main() {
//	int i = 0;
//	double sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 1) {
//			sum += 1.0 / i;
//		}
//		else {
//			sum -= 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//}
//int main() {
//	int arr[10];
//	for (int i = 0; i <10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int max=arr[0];
//	for (int i = 1; i < 10;i++) {
//		if (max < arr[i])max = arr[i];
//	}
//	printf("%d\n", max);
//}
//int main() {
//	for (int i = 1; i < 10; i++) {
//		for (int j = 1; j <=i; j++) {
//			printf("%d*%d=%d	", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int p;
//	scanf("%d", &p);
//	int mid = sizeof(arr) / sizeof(arr[0]) / 2;
//
//	if (p > arr[mid]) {
//		for (int i = mid + 1; i < 10; i++) {
//			if (p == arr[i]) {
//				printf("%d", i);
//				break;
//			}
//			if (p != arr[i] && i >= 9) {
//				printf("找不到");
//			}
//			
//		}
//		
//	}
//	else if (p < arr[mid]) {
//		for (int i = 0; i < mid; i++) {
//			if (p == arr[i]) {
//				printf("%d", i);
//				break;
//			}
//			if (p != arr[i] && i >= mid - 1) {
//				printf("找不到");
//			}
//		}
//		
//	}
//	else if(p==arr[mid]){
//		printf("%d", mid);
//	}
//	else {
//		printf("找不到");
//	}
//
//	
//	return 0;
//}
//int main() {
//	int a = 20;
//	int b = -10;
//	int* p = &a;
//	int* q = &b;
//	printf("%p\n", p);
//	printf("%p\n", q);
//	return 0;
//}
#include<stdio.h>

int main()
{
	int A = 0, B = 0, C = 0, D = 0, E = 0;
	for (A = 1; A <= 5; A++)
		for (B = 1; B <= 5; B++)
			for (C = 1; C <= 5; C++)
				for (D = 1; D <= 5; D++)
					for (E = 1; E <= 5; E++)
						if (((B == 2) + (A == 3) == 1 && (B == 2) + (E == 4) == 1 && (C == 1) + (D == 2) == 1 &&
							(C == 5) + (D == 3) == 1 && (E == 4) + (A == 1) == 1) == 1)
							if (120 == A * B * C * D * E)
								printf("A=%d  B=%d  C=%d  D=%d  E=%d\n", A, B, C, D, E);
	return 0;
}

