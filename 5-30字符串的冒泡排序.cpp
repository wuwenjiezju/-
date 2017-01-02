//
//  5-30字符串的冒泡排序.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/6.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <string>


int main()
{
    using namespace std;
    int N,K;
    cin>>N>>K;
    string str[100],t;
    for(int i=0;i<N;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<K;i++)
        for(int j=0;j<N-i-1;j++)
        {
            if(str[j]>str[j+1]){
                t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    for(int i=0;i<N;i++)cout<<str[i]<<"\n";
    return 0;
}
