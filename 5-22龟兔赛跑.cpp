//
//  5-22龟兔赛跑.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/4.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int T,s1,s2;
    cin>>T;
    s1=s2=0;
    int i=0;
    while(i<=T){
        if(s2>s1&&i+30<=T){
            i=i+30;
            s1=s1+90;}
        else if(s2>s1&&i+30>T){
            s1=s1+3*(T-i);
            break;
        }
        if(i+10<=T){
        i=i+10;
        s1=s1+3*10;
        s2=s2+9*10;
        }
        else{
            s1=s1+3*(T-i);
            s2=s2+9*(T-i);
            break;
        }
    }
    if(s1>s2)cout<<"@_@ "<<s1;
    else if (s1<s2)cout<<"^_^ "<<s2;
    else cout<<"-_- "<<s1;
    return 0;
}
