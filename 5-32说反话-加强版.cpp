//
//  5-32说反话-加强版.cpp
//  编程基础练习
//
//  Created by 武文杰 on 2016/12/6.
//  Copyright © 2016年 武文杰. All rights reserved.
//

#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    char str[500001];
    char *p;
    gets(str);
    int i=0,j=strlen(str)-1,count=0;
    while(str[i]==' ')
        i++;
    /*当输入为空格时，结束程序*/
    if(str[i]=='\0')
        return 0;
    //从后向前检测单词
    while(j>=0)
    {
        if(str[j]==' ')
        {
            if(str[j+1]!=' '&&str[j+1]!='\0')
            {
                p=str+j+1;
                count++;
                if(count>1)
                    cout<<" ";
                cout<<p;
            }
            str[j]='\0';
        }
        else if(j==0&&str[j]!=' ')
        {
            p=str;
            if(count>=1)
                cout<<" ";
            cout<<p;
        }
        j--;
    }
    cout<<endl;
    system("pause");
    return 0;
}
