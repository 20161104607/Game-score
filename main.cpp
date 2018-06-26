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
        if( *(score+1)>max)
            max = *(score+i);
        else if(*(score+i)<min);
        min = *(score+i);
    }
    //将最高分，最低分设置为0
    for (i=0; i<num; i++) {
        if(num>2)
        {
            if(*(score+i)==max || *(score+i)==min)
            {
                *(score+i)=0;
            }
        }
        sum +=  *(score+i);
    }
    if(num>2)
    {
        num=num-2;
    }
}
int main(int argc, const char * argv[]) {
    char key;
    while (key!='N'&&key!='n') {
        
        intputSc();
        printf("按任意键继续下一位选手成绩计算，退出请选择N:")；
        fflish(stdin);
        key = getchar();
    }
    
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}
