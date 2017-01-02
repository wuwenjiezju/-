//
//  5-28猴子选大王.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/5.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int N;
    cin>>N;
    int monkey[N]={1};
    for(int i=N;i>0;i--)
    {
        for(int j=0;j<3;j++)
        {
            if(monkey[j]!=0)
                monkey[j+1]=monkey[j+1];
                if(monkey[j+1]%3==0)monkey[j+1]=0;
            
            }
    
    }
    return 0;
}
