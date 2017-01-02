//
//  5-19支票面额.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/3.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int y,f,n,flag;
    flag=0;
    cin>>n;
    for(y=0;y<100;y++){
        for(f=0;f<100;f++)
            if(98*f-199*y==n){cout<<y<<"."<<f;flag=1;break;}
    }
    if(flag==0)cout<<"No Solution";
    return 0;
}
