//
//  5-24约分最简分式.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/5.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d/%d",&x,&y);
    for(int i=1;i<=x&&i<=y;i++)
    {
        if(x%i==0&&y%i==0){
            x=x/i;
            y=y/i;
            i=1;
        }
    }
    printf("%d%c%d",x,"/",y);
    return 0;
}
