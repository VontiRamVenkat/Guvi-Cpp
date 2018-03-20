#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int r;
    int i;
    cout<<"Enter The Num:";
    cin>>r;
    for(i=1;i<=r;i++)
    if(r%i==0)
    cout<<i<<" ";
    return 0;
}
