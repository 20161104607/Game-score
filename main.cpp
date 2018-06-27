//
//  main.cpp
//  Game score
//
//  Created by 20161104607 on 18/6/25.
//  Copyright © 2018年 20161104607. All rights reserved.
//

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Student{
    string name;
    int score[7];
    int sum;
};
int main(){
    //评委评分 最高最低 取平均分
    int n;
    cin>>n;
    Student stu[n];
    for(int i=0;i<n;i++){
        cin>>stu[i].name;
        for(int j=0;j<7;j++){
            cin>>stu[i].score[j];
        }
        int max=stu[i].score[0],min=stu[i].score[0];
        for(int j=0;j<7;j++){
            if(stu[i].score[j]>max)max=stu[i].score[j];
            if(stu[i].score[j]<min)min=stu[i].score[j];
        }
        for(int j=0;j<7;j++){
            stu[i].sum+=stu[i].score[j];
        }
        stu[i].sum=stu[i].sum-max-min;
        cout<<"sum="<<stu[i].sum<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(stu[i].sum<stu[j].sum){
                Student temp;
                temp=stu[i];
                stu[i]=stu[j];
                stu[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<stu[i].name<<' '<<stu[i].sum<<endl;
    }
    
    
    //读取.csv文件

    string value;
    char filename[256];
    cout<<"请输入文件名"<<endl;
    cin>>filename;
    ifstream infile(filename);
    while(infile.good()){
        //.csv文件用","作为分隔符
        getline(infile,value,',');
        cout<<value<<endl;  
    }
    
    
    return 0;
}
