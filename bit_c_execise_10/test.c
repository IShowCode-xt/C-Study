#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Sort(int arr[],int sz) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
		
			if (arr[j] > arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			
			}
		}
		if (flag = 1)
			break;
	
	}

}
int main() {
	//int arr1[3][5] = {1,2,3,4,5,6,7,8,9,10};
	//int arr2[3][5] = { {1,2},{3,4},{5,6} };
	//int arr3[][5] = { {1,2},{3,4},{5,6} };
	//int* p = &arr1[0][0];
	//for (int i = 0; i < 15; i++) {
	//	printf("%d ", *p);
	//	p++;
	//}

	//char arr4[4][6] = {'a','b'};
	//char arr5[4][6] = { {'a'},{'b'}};
	//char arr6[4][6] = {"abc","def","qwe"};

	//数组名就是首元素的地址
	//有2个例外
	//1.sizeof(数组名),这里的数组名表示整个数组,sizeof(数组名)计算的是整个数组的大小
	//2.&数组名,这里的数组名表示整个数组,取出的是数组的地址


	//排序
	int arr[] = { 1,8,3,4,5,7,6,2,9 };

	printf("%p\n",arr );
	printf("%p\n", &arr[0]);
	printf("%p\n",&arr );
	printf("------------------\n");
	printf("%p\n",arr+1 );
	printf("%p\n",&arr[0]+1 );
	printf("%p\n",&arr+1 );



	//数组传参
	//排序
	int sz = sizeof(arr) / szieof(arr[0]);
	Sort(arr,sz);
	return 0;
}
