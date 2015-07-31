//习题2-6
//排列
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int abc, def, ghi;
    int a,b,c,d,e,f,g,h,i;
    int count[10];
    int flag=1; //判断三个数是否符合标准的旗帜 flag==1为符合 flag==0不符合
    
    for(a=1; a<=3; a++)
    {
        for(b=1; b<=9; b++)
        {
            for(c=1; c<=9; c++)
            {
                flag=1;
                memset(count, 0, sizeof(count));    //数组count清零
                abc=100*a+10*b+c;
                def=2*abc;
                ghi=3*abc;
                
                if(ghi<1000)
                {
                    d=def/100;
                    e=(def/10)%10;
                    f=def%10;
                    g=ghi/100;
                    h=(ghi/10)%10;
                    i=ghi%10;
                    
                    count[a]++;
                    count[b]++;
                    count[c]++;
                    count[d]++;
                    count[e]++;
                    count[f]++;
                    count[g]++;
                    count[h]++;
                    count[i]++;
                    
                    for(int j=1; j<=9; j++)
                        if(count[j]!=1) flag=0;
                }
                
                else flag=0;
                
                if(flag)    cout<<abc<<"  "<<def<<"  "<<ghi<<endl;
            }
        }
    }
    return 0;
}
