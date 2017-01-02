//
//  5-2然后是几点.cpp
//  编程基础练习
//
//  Created by 武文杰 on 16/12/1.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
int main()
{
    int InitTime,Internal,Hour,Minute,Internal_hour,Internal_minute;
    std::cin>>InitTime;
    Hour=InitTime/100;
    Minute=InitTime%100;
    std::cin>>Internal;
    Internal_minute=Internal%60;
    Internal_hour=Internal/60;
    Minute=Minute+Internal_minute;
    Hour=Hour+Internal_hour+Minute/60;
    Minute=Minute%60;
    if(Minute<0){
        Hour=Hour-1;
        Minute=Minute+60;
    }
    if(Minute!=0)
    std::cout<<Hour<<Minute<<"\n";
    if(Minute==0)
        std::cout<<Hour<<"00";
    return 0;
    
}
