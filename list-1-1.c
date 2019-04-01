#include<stdio.h>
int main(void){
    int no;
    int ans=7;
    printf("请猜一个0-9的整数。\n");

    //list 1: printf("是多少呢：");
    // scanf("%d",&no);
    // if(no>ans)
    //     printf("\a再小一点。\n");
    // else if(no<ans)
    //     printf("\a再大一点。\n");
    // else
    //     printf("回答正确~\n");
    // return 0;

    // list 2:do{
    //     printf("shi duo shao ne:");
    //     scanf("%d",&no);
    //     if(no>ans)
    //         printf("\aa little\n");
    //     else if(no<ans)
    //         printf("\aa big\n");
    // }while(no!=ans);
    // printf("corrent\n");
    // return 0;

    // list 3:
    while(1){//求值结果不为0，就永远重复循环
        printf("shi duo shao ne:");
        scanf("%d",&no);
        if(no>ans)
            printf("\a a little.\n");
        else if(no<ans)
            printf("\a a big \n");
        else
            break;//满足条件时通过break跳出
    }
    printf("corrent\n");
    return 0;
    
    
}