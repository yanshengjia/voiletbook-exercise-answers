//习题1-4
//正弦和余弦
#include <iostream>
#include <cmath>
using namespace std;
#define _USE_MATH_DEFINES

int main()
{
    int n;  //0<n<360
    cin>>n;
    cout<<sin(n*M_PI/180)<<endl;    //M_PI不是真正的π，只是一个近似值，浮点数运算有误差
    cout<<cos(n*M_PI/180)<<endl;
    return 0;
}

