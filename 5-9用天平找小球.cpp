//
//  5-9用天平找小球.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//

//#include <iostream>
#include <iostream>
int main()
{
    using namespace std;
    int A[1],B[1],C[1];
    cin>>A[0]>>B[0]>>C[0];
    if(A[0]==B[0])cout<<"C\n";
    else if(A[0]==C[0])cout<<"B\n";
    else cout<<"A\n";
    return 0;
}
