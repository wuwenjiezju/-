//
//  字符串循环左移.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/6.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string str;
    int N;
    getline(cin,str);
    cin>>N;
    int num=str.length();
    for(int i=0;i<N;i++){
        char t=str[0];
        for(int j=0;j<num-1;j++){
            str[j]=str[j+1];
        }
        str[num-1]=t;
    }
    cout<<str;
    return 0;
}
