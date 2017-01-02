//
//  5-21求特殊方程的正整数解.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/3.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int N;
    int flag=0;
    cin>>N;
    for(int x=0;x<100;x++)
        for(int y=0;y<100;y++)
            if(x*x+y*y==N&&x<=y){cout<<x<<" "<<y<<"\n";flag=1;}
    if(flag==0)cout<<"No Solution";
    return 0;
}
