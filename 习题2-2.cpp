//习题2-2
//韩信点兵
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    
    int a,b,c;
    int n;  //总人数  10<=n<=100
    int min;
    int count=1;
    int flag=0; //有无解的旗帜

    while(cin>>a>>b>>c)
    {
        flag=0;
        for(int i=10; i<=100; i++)
        {
            if(i%3==a&&i%5==b&&i%7==c)
            {
                flag=1; //有解
                min=i;
                break;
            }
        }
        
        if(flag)    cout<<"Case "<<count<<": "<<min<<endl;
        else cout<<"Case "<<count<<": No answer"<<endl;
        count++;
    }
    return 0;
}
