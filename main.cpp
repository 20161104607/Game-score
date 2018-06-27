//
//  main.cpp
//  Game score
//
//  Created by 20161104607 on 18/6/25.
//  Copyright © 2018年 20161104607. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int max (int x,int y);
int min (int x,int y);
int main()
{
    int a=0,b=101,c=0,i,j;
    double average;
    cout<<"请输入选手成绩"<<endl;
    for(i=1;i<=10;i++)
    {
        cout<<"第"<<i<<"位评委给分：";
        cin>>j;
        a=max(a,j);
        b=min(b,j);
        c=c+j;
    }
    average=(c-a-b)/8;
    cout<<"减去一个最高分"<<a<<","<<"减去一个最低分"<<b<<endl;
    cout<<"该选手的最后得分："<<average<<endl;
    return 0;
}

int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int min(int x, int y)
{
    if(x>y)
    {
        return y;
    }
    else
    {
        return x;
    }
    return 0;
}

    

    void split(string str,string separator,vector<string> &result)
    {//对每一行以逗号为分隔符进行分割
        result.clear();
        int cutAt;
        while( (cutAt = str.find_first_of(separator)) != str.npos )
        {
            if(cutAt > 0)
            {
                result.push_back(str.substr(0, cutAt));
            }
            str = str.substr(cutAt + 1);
        }
        if(str.length() > 0)
        {
            result.push_back(str);
        }
    }

    ifstream file ( "./template/GPLT.csv" );
    string row;
    getline(file,row);//剔除首部
    vector<string> infRow;
    int typeChoose;
    while ( file.good() )
    {
        getline(file,row);
        split(row,",",infRow);
        if(infRow.size())//有效的数据
        {
            //doSomething
        }
     }
