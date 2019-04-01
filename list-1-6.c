#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int no;//读取的值
    int ans;//目标数字
    srand(time(NULL));
    ans=rand()%1000;//生成0~999的随机数
    printf("qing cai yi ge 0~999de zheng shu. \n");
    do{
        printf("shi duo shao ne:");
        scanf("%d",&no);
        if(no>ans)
            printf("zai xiao yi dian\n");
        else if(no<ans)
            printf("zai da yi dian\n");
    }while(no!=ans);
    printf("hui da zheng que.\n");
    return 0;
}