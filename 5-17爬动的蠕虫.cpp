//
//  5-17爬动的蠕虫.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/3.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int sum,N,U,D,t;
    cin>>N>>U>>D;
    sum=0;
    t=0;
    while(sum<N)
    {
        sum=sum+U;
        t++;
        if(sum<N){
            sum=sum-D;
            t++;
        }
    }
    cout<<t;
    return 0;
}
