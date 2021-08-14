#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	int a[] = {1,2,3,4,5};
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* parr[] = { a,b,c };
//	for (int i = 0; i < 3;i++) {
//
//		for (int j = 0; j < 5; j++) {
//			printf("%d", parr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void left(char arr[], int k) {
//	int size = sizeof(arr) / sizeof(arr[0]);
//	char arrs[4] = { 0 };
//	int a = 0;
//	for (int i = k; i < size; i++) {
//			arrs[a] = arr[i];
//			a++;
//	}
//	for (int j = 0; j < k&&a<size; j++) {
//		arrs[a] = arr[j];
//		a++;
//		
//	}
//	
//	for (int p = 0; p < size; p++) {
//		printf("%c", arrs[p]);
//	}
//
//}
//
//int main() {
//
//	int k;
//	scanf("%d", &k);
//	char arr[] = { 'a','b','c','d' };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	if(k <= size-1) {
//		left(arr, k);
//	}
//	else {
//		for (int p = 0; p < size; p++) {
//			printf("%c", arr[p]);
//		}
//	}
//	return 0;
//}
//void find(int arr[3][4],int k)  {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d\n", arr[i][j]);
//			if (arr[i][j] == k) {
//				printf("´æÔÚk\n");
//				break;
//			}
//		}
//	}
//	printf("²»´æÔÚk=%d",k);
//	
//
//int main() {
//	int k;
//	scanf("%d", &k);
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	find(arr, k);
//
//}
//
