//
// Created by Summer's on 2021/7/11.
//
#include <stdio.h>
int d=4;

void second();//函数声明
int third();
int main(){
    int a=1;
    short b=2;
    char c='x';
    float e=3.14;
    double f=3.14159261;
    int x;
    int y;
    int m;
    printf("begin---------\n");
    printf("%d\n",a);
    printf("%c\n",c);
    printf("%f\n",e);
    printf("%lf\n",f);
    scanf("%d%d%d",&x,&y,&m);
    printf("%d\n",x+y);
    printf("%d\n",x*y);
    printf("%d\n",x-y);
    printf("%d\n",x/y);
    printf("%d\n",x%y);
   second();
   third(m);
}

void second() {
printf("ending---------\n");
}

int third(int x){
    for (int i = 1; i <=x ; i++) {
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <x ; i++) {
        for (int j = 1; j <=i ; ++j) {
            printf(" ");
        }
        for (int k=x-i;k>0;k--) {
            printf("*");
        }
        printf("\n");
    }


}