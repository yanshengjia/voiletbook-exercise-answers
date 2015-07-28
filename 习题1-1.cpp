//习题1-1
//平均数
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    float average;
    average = (a+b+c)/3;
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<average;    //保留3位小数
    
    return 0;
}