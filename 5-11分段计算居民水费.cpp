//
//  5-11分段计算居民水费.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
int main()
{
    float x,y;
    std::cin>>x;
    if(x>15)y=2.5*x-17.5;
    else if(x>=0&&x<=15)y=4*x/3;
    printf("%.2f",y);
    return 0;
}
