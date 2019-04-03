#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX_STAGE 10
int main(void){
    int i;
    int stage;//已经输入的次数
    int no;//读取的值
    int ans;//目标数字
    int num[MAX_STAGE];//存取读取过的值的例示记录
    srand(time(NULL));
    ans=rand()%1000;
    printf("qing cai yi ge 0~999 de zheng shu.\n");
    stage=0;
    do{
        printf("hai you %d ci ji hui,shi duo shao ne:",MAX_STAGE-stage);
        scanf("%d",&no);
        num[stage++]=no;//将输入的值存到num数组中
        if(no>ans)
            printf("zai xiao yi dian\n");
        else if(no<ans)
            printf("zai da yi dian \n");
    }while(no!=ans&&stage<MAX_STAGE);
    if(no!=ans)
        printf("i'm sorry,zheng que da an shi %d.\n",ans);
    else{
        printf("hui da zheng que\n");
        printf("ni yong le %d ci cai zhong\n",stage);
    }

    puts("\n----shu ru ji lu----");
    for(int i=0;i<stage;i++)
        printf("%2d:%4d %+4d\n",i+1,num[i],num[i]-ans);
    return 0;


}