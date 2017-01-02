//
//  5-3逆序的三位数.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
int main()
{
    int i,j,k,N;
    std::cin>>N;
    i=N/100;
    j=N/10-i*10;
    k=N-100*i-10*j;
    
    std::cout<<(100*k+10*j+i)<<"\n";
}
