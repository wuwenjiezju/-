//
//  5-12两个数的简单计算器.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/3.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    int x,y;
    int z;
    char s;
    scanf("%d %c %d",&x,&s,&y);
    switch (s) {
        case '+': z=x+y;std::cout<<z;
                break;
            case '-': z=x-y;std::cout<<z;
                break;
            case'*':z=x*y;std::cout<<z;
                break;
            case'/':z=x/y;std::cout<<z;
                break;
        case '%':z=x%y;std::cout<<z;
            break;
            default:std::cout<<"ERROR";
                break;
        }
    return 0;
    }

