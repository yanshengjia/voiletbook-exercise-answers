//习题2-3
//倒三角形
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=n-1; i>=0; i--)
    {
        for(int m=1; m<n-i; m++)
            cout<<" ";
        for(int j=0; j<2*i+1; j++)
            cout<<"#";
        cout<<endl;
    }
    return 0;
}
