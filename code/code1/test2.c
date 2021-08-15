//
// Created by Summer's on 2021/7/13.
//

#include <stdio.h>
#include <string.h>
//定义的标识符常量
#define MAX 10
//枚举常量
enum Sex{
    MAN,
    FEMAN,
    SECRET
};
int add(int num1,int num2){
    return num1+num2;
}
int main(){
    //const定义常属性,a为变量但又有常属性,所以n为常变量
    const int a=1;
  enum Sex s=FEMAN;
  char arr1[]="abc";
  char arr2[]={'a','b','c','\0'};
  int arr3[]={1,2,3,4,5};
  int num1;
  int num2;
  int v=2;
  int m=4;
  int vs=v <<1;
  int ms=m >>1;
    printf("%d\n",MAX);
    printf("%d\n",MAN);
    printf("%d\n",FEMAN);
    printf("%d\n",SECRET);
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%d\n",strlen(arr2));
    printf("%d\n",strlen("c:/test/328/1"));
//    scanf("%d%d",&num1,&num2);
//    printf("%d\n",add(num1,num2));
printf("%d\n",vs);
printf("%d\n",ms);
    return 0;
}
