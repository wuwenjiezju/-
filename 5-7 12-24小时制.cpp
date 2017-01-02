//
//  5-7 12-24小时制.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//
#include<iostream>
int main()
{
    using namespace std;
    int a,b;
    scanf("%d:%d",&a,&b);
    if(a>12&&a<24)
    {
      cout<<a-12<<":"<<b<<" PM\n";
    }
    else if (a<12)
    {
        cout<<a<<":"<<b<<" AM\n";
    }
    else if (a==24)
    {
        cout<<"0:0 AM\n";
    }
    else if (a==12)
    {
        cout<<a<<":"<<b<<" PM";
    }
    return 0;
}
