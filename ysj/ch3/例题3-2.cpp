//例题3-2     UVa 10082
//WERTYU
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <fstream>
using namespace std;

int main()
{
    char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char t;
    int i;
    while((t=getchar())!=EOF)
    {
        for(i=1; s[i]&&s[i]!=t; i++);   //s[i]存在或者s[i]!=t继续循环
        if(s[i])    cout<<s[i-1];   //s[i]存在于数组
        else cout<<t; //s[i]不存在与数组中
    }

    return 0;
}