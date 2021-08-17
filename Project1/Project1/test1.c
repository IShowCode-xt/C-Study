#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int MAX(int a, int b);
//	int f, s;
//	scanf("%d%d", &f, &s);
//	int max = Max(f, s);
//	printf("两数较大值为:%d\n", max);
//	return 0;
//}
//int Max(int a, int b) {
//	int m = 0;
//	if (a > b) {
//		m = a;
//	}
//	else {
//		m = b;
//	}
//	return m;
//}

//int main() {
//  void  printFS();
//    printFS();
//
//    return 0;
//}
//void printFS() {
//    for (int i = 2; i > 0; i--) {
//        for (int k = 5; k > 0; k--) {
//            printf(" ");
//        }
//        for (int j = 2; j > 0; j--) {
//            printf("*");
//        }
//        for (int p = 5; p > 0; p--) {
//            printf(" ");
//        }
//        printf("\n");
//    }
//}
//int main() {
//	int a, b, c;
//	int f1 = 0;
//	int t1 = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int f = 0;
//	int s = 0;
//	int t = 0;
//	f = a;
//	if (f < b) {
//		f = b;
//		f1 = 1;
//	}
//	if (f < c) {
//		f = c;
//		f1 = 2;
//	}
//	t = a;
//	if (t > b) {
//		t = b;
//		t1 = 1;
//	}
//	if (t >c) {
//		t = c;
//		t1 = 2;
//	}
//	if (f1 == 0 && t1 == 1|| f1 == 1 && t1==0)s = c;
//	if (f1 == 1 && t1 == 2|| f1 == 2 && t1 == 1)s = a;
//	if (f1 == 2 && t1 == 0 || f1 == 0 && t1 == 2)s = b;
//	int arr[3] = { f,s,t };
//	for (int i = 0; i < 3; i++) {
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

//int main() {
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int arr[3] = { a,b,c };
//	
//	if (arr[1] <= arr[0] && arr[1] >= arr[2]) {
//		for (int i = 0; i < 3; i++) {
//			printf("%d", arr[i]);
//		}
//	}
//	else
//	{
//		int temp;
//		int z = 1;
//		while (!(arr[1] <= arr[0] && arr[1] >= arr[2]|| arr[1]>= arr[0] && arr[1] <= arr[2])) {
//			
//			temp=arr[z];
//			arr[z-1] = arr[z];
//			arr[z] = temp;
//			z++;
//		}
//		if (arr[0] < arr[2]) {
//			temp = arr[0];
//			arr[0] = arr[2];
//			arr[2] = temp;
//		}
//		for (int i = 0; i < 3; i++) {
//			printf("%d", arr[i]);
//		}
//
//	}
//	return 0;
//}
//int main() {
//	for (int i = 1; i<=100; i++) {
//		if (i % 3 == 0)printf("%d\n", i);
//	}
//	return 0;
//}







//int main() {
//	printf("Hello World!");
//	for (int i = 1; i <= 4; i++) {
//		for (int k = 1; k <= i-1; k++) {
//			printf(" ");
//		}
//		for (int j = 1; j <= 4; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	int max(int x, int y, int z);
//	int a, b, c, m;
//	scanf("%d%d%d", &a, &b, &c);
//	m = max(a, b, c);
//	printf("最大值为:%d\n", m);
//	int j = 3;
//	int k = 2;
//	int s = j / k;
//	printf("%d\n", s);
//
//	int x, i, p, l;
//	x = (i = 4, j = 16, k = 32);
//	printf("%d\n", x);
//	char h = 'A' + '6' - '3';
//	printf("%c\n", h);
//	char arr[] = "111\n2222\060333\q4444\b";
//
//	printf("%s\n", arr);
//
//	return 0;
//}
//int max(int x, int y, int z) {
//	int m = 0;
//	m = x;
//	if (y > m) m = y;
//	if (z > m) m = z;
//	return m;
//}