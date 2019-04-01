#include<stdio.h>
#include<stdlib.h>
int main(){
    int retry;
    printf("sheng cheng yi ge 0~%d de wei sui ji shu\n",RAND_MAX);
    do{
        printf("\n sheng cheng le sui ji shu:%d.\n",rand());
        printf("try again?(0)no  (1)yes:");
        scanf("%d",&retry);

    }while(retry==1);
    return 0;
}
//伪随机数的使用
//系统一般这样定义RAND_MAX:
//#define RAND_MAX 32767