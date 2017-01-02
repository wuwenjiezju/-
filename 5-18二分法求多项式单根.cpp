//
//  5-18二分法求多项式单根.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/3.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

class Function
{
public:
    float a3;
    float a2;
    float a1;
    float a0;
    float f(float x);
};
float Function::f(float x)
{
    float f;
    f=a3*x*x*x+a2*x*x+a1*x+a0;
    return f;
};
Function ff;
int main()
{
    using namespace std;
    float a,b;
    cin>>ff.a3>>ff.a2>>ff.a1>>ff.a0;
    cin>>a>>b;
    if(ff.f(a)==0)printf("%.2f",a);
    if(ff.f(b)==0)printf("%.2f",b);
    while(ff.f(a)*ff.f(b)<0)
    {
        if(ff.f((a+b)/2)==0){printf("%.2f",(a+b)/2);break;}
        else if (ff.f((a+b)/2)*ff.f(a)>0)a=(a+b)/2;
        else if (ff.f((a+b)/2)*ff.f(b)>0)b=(a+b)/2;
        
    }
    return 0;
    
}
