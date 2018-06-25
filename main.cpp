//
//  main.cpp
//  Game score
//
//  Created by 20161104607 on 18/6/25.
//  Copyright © 2018年 20161104607. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
float score[99];// 成绩数据
int num=0;
float sum=0;


void intputSc()
{
    if(num==0)
    {
        printf(" 请您输入评委数目:");
        scanf("%d",&num);
    }
    int i=0;
    printf("请您输入％d位评委评分:\n",num);
    for (i=0;i<num ; i++) {
        scanf("%f",&score[i]);
        
    }
    //去掉最高分和最低分
    avoidMax(score);
    //输出结果
    printf("平均分:%.2f\n",sum/num);
    // 回复数目
    if(num>2)
    {
        num = num+2;
    }
}
//成绩处理模块儿
void avoidMax(float *score)
{
    int i=0;
    float max= *score，min= *score;
    //寻找最高分最低分
    for (i=0; i<num; i++) {
        
        <#statements#>
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
