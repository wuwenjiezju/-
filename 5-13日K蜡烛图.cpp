//
//  5-13日K蜡烛图.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/3.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    double open,close,high,low;
    cin>>open>>high>>low>>close;
    if(close>open)cout<<"R-Hollow";
    else if (close<open)cout<<"BW-Solid";
    else cout<<"R-Cross";
    if(low<close&&low<open&&high>open&&high>close)cout<<" with Lower Shadow and Upper Shadow";
    else if (low<close&&low<open)cout<<" with Lower Shadow";
    else if (high>open&&high>close)cout<<" with Upper Shadow";
    return 0;
}
