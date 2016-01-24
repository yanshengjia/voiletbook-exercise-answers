//习题2-5
//分数化小数
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int a,b,c,t;
    int integer;
    int remainder;
    int last;
    int extra;
    int count=1;
    
    while(cin>>a>>b>>c&&a*a+b*b+c*c!=0)
    {
        cout<<"Case "<<count<<": ";
        count++;
        integer = a/b;  //整数部分
        cout<<integer<<".";
        t = a;
        
        //a<b
        if(a<b)
        {
            for(int i=0; i<c-1; i++)
            {
                remainder = (t*10)/b;
                cout<<remainder;
                t = (t*10)%b;
            }
        
            //小数部分最后一位判断进位
            last=(t*10)/b;
            t=(t*10)%b;
            extra=(t*10)/b;
            if(extra>4)    last++;
            cout<<last<<endl;
        }
        
        //a==b
        else if(a==b)
        {
            for(int i=0; i<c; i++)
                cout<<"0";
            cout<<endl;
        }
        
        //a>b
        else
        {
            remainder = ((a%b)*10)/b;
            cout<<remainder;  //  首位小数
            t=((a%b)*10)%b;
            
            for(int i=1; i<c-1; i++)
            {
                remainder = (t*10)/b;
                cout<<remainder;
                t = (t*10)%b;
            }
            
            //小数部分最后一位判断进位
            last=(t*10)/b;
            t=(t*10)%b;
            extra=(t*10)/b;
            if(extra>4)    last++;
            cout<<last<<endl;
        }
    }
    return 0;
}
