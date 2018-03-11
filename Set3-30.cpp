#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d,ans1,ans2;
    cout<<"Enter the first hour and minute:"<<endl;
    cin>>a>>b;
    cout<<"Enter the second hour and minute:"<<endl;
    cin>>c>>d;
    ans1 = c - a;
    ans2 = d - b;
    cout<<"The difference is:";
    cout<<abs(ans1)<<" "<<abs(ans2);
    return 0;
}
