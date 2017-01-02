//
//  5-4 BDC解密.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
int main()
{
    int N,k,m;
    std::cin>>N;
    m=N;
    k=0;
    while(N/16!=0)
    {
        N=N/16;
        k++;
        m=m-16*N;
    }
    for(int i=0;i<k;i++)
        N=N*10;
    N=N+m;
    std::cout<<N;
    return 0;
}
