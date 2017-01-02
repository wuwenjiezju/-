//
//  5-14求整数段和.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/3.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int x,y,sum,n;
    cin>>x>>y;
    sum=0;
    n=y-x+1;
    for(int i=0;i<n;i++)
        if(i%5!=0||i==0){
            printf("%5d",x);
            sum=sum+x;
            x++;
        }
        else{
            cout<<"\n";
            printf("%5d",x);
            sum=sum+x;
            x++;
        }
    cout<<"\nSum = "<<sum;
    return 0;
    
}
