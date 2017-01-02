//
//  5-26单词长度.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/5.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int k=0;
    int i=0;
    bool flag=true;
    char str;
    while(1){
         scanf("%c",&str);
        
        if(str!='.') {
             flag=false;
            if(str!=' ')
            k++;
           
        }
        if(flag)break;
        if(str==' '){
            if(i==0&&k!=0){cout<<k;
            k=0;
                i++;
            }
            else if(i!=0&&k!=0){
                cout<<" "<<k;
                k=0;
            }
        }
        else if(str=='.'){
            if(k!=0&&i!=0){
           cout<<" "<<k;
                break;}
            if(k!=0&&i==0){
                cout<<k;
                break;
            }
            break;
        }
    }
    return 0;
}
