#include <iostream>
using namespace std;
int main() 
{
    int a;
    int b;
    cout<<"Enter 2 no:";
    cin>>a>>b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<a<<" "<<b;
    return 0;
}
