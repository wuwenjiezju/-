//
//  main.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,foot,inch;
    std::cin>>n;
    inch=(12+1/12)*n/30.48;
    foot=inch/12;
    inch=inch-12*foot;
    std::cout<<foot<<" "<<inch;
    return 0;
}
