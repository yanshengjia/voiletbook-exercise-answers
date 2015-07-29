//习题1-6
//三角形
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a+b>c&&b+c>a&&a+c>b)
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    else cout<<"not a triangle"<<endl;
    
    return 0;
}