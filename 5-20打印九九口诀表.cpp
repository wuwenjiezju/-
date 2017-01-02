//
//  5-20打印九九口诀表.cpp
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
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"*"<<i<<"=";
            printf("%-4d",i*j);
        }
        cout<<"\n";
    }
    return 0;
}
