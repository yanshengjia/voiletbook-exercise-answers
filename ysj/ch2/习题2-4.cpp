//习题2-4
//子序列的和
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    long n,m;   //本题的陷阱在于：n和m如果设成int型，计算它们的平方时会有溢出的危险
    double result;
    int count=1;
    
    while(cin>>n>>m&&n*n+m*m!=0)
    {
        result=0;
        for(int i=n; i<=m; i++)
            result+=1.0/(double)(i*i);
        
        cout<<"Case "<<count<<": "<<fixed<<setprecision(5)<<result<<endl;
        count++;
    }
    
    return 0;
}
