//例题3-1     UVa 272
//TeX中的引号
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
    char t;
    int flag = 1;
    while((t=getchar())!=EOF)
    {
        if(t=='"')
        {
            cout<<(flag?"``":"''");
            flag=!flag;
        }
        else cout<<t;
    }
    return 0;
}
