//
//  5-15.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/3.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    float pi,c,a,b,s;
    int n;
    n=1;
    a=1.0;
    b=1.0;
    pi=1.0;
    cin>>s;
    c=1.0;
    while(c>s)
    {
        a=a*n;
        b=b*(2*n+1);
        c=a/b;
        pi=pi+c;
        n++;
    }
    pi=pi*2;
    printf("%.6f",pi);
    return 0;
}
