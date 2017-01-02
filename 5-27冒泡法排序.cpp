//
//  5-27冒泡法排序.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/5.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int N,K;
    cin>>N>>K;
    int str[N];
    for(int i=0;i<N;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<K;i++)
        for(int j=0;j<N-i;j++)
        {
            if(str[j]>str[j+1]){
                int t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    for(int i=0;i<N-1;i++)cout<<str[i]<<" ";
    cout<<str[N-1];
    return 0;
}
