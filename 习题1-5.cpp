//习题1-5
//打折
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int price=95;   //衣服单价95元
    int n;  //购买的衣服件数
    cin>>n;
    
    double sum=n*price;
    if(sum<300) cout<<fixed<<setprecision(2)<<sum<<endl;
    else cout<<fixed<<setprecision(2)<<sum*0.85<<endl;
    
    return 0;
}
