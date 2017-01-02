//
//  5-25念数字.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/5.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int N;
    string str[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    cin>>N;
    int n=N;
    if(N==0)cout<<str[0];
    if(N<0){N=-N;cout<<"fu ";}
    if(N>0){
        int k=0;
        while(n/10!=0){
            n=n/10;
            k++;
        }
        int p[k];
        for(int i=0;i<=k;i++){
            p[i]=N%10;
            N=N/10;
        }
        for(int i=k;i>0;i--){
            cout<<str[p[i]]<<" ";
        
        }
        cout<<str[p[0]];
    }
    
    return 0;
}
