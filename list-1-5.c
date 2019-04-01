#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int retry;
    srand(time(NULL));//根据当前时间设定随机数的种子，用到了time函数
    printf("neng gou sheng cheng 0~%d de sui ji shu\n",RAND_MAX);
    do{
        printf("sheng cheng le sui ji shu:%d\n",rand());
        printf("zai yun xing yici?(0)no---(1)yes:");
        scanf("%d",&retry);
    }while(retry==1)
    return 0;


}