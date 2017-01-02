//
//  5-6混合类型数据格式化输入.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
int main()
{
    using namespace std;
    float f1,f2;
    int n;
    char a;
    cin>>f1>>n>>a>>f2;
    cout<<a<<" "<<n<<" ";
    printf("%.2f",f1);
    cout<<" ";
    printf("%.2f",f2);
    return 0;
}
