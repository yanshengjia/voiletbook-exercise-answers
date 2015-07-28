//习题1-2
//温度
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double f;
    cin>>f;
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<5*(f-32)/9;
    return 0;
}