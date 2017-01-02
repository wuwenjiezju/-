//
//  5-8超速判断.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    int speed;
    cin>>speed;
    if(speed>60)
    {
        cout<<"Speed: "<<speed<<" - Speeding\n";
    }
    else if (speed<=60)
    {
        cout<<"Speed: "<<speed<<" - OK\n";
    }
    return 0;
}
