//
//  5-10计算工资.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    int y,n;
    float s;
    cin>>y>>n;
    if(y>=5)
    {
        if(n<=40)
        {
            s=50*n;
        }
        else if(n>40)
        {
            s=50*40+1.5*50*(n-40);
        }
    }
    if(y<5)
    {
        if(n<=40)
        {
            s=30*n;
        }
        else if(n>40)
        {
            s=30*40+1.5*30*(n-40);
        }
    }
    printf("%.2f",s);
    return 0;
}
