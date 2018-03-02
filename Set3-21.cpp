#include<iostream>
using namespace std;
float AP(float a, float d, int n)
{
    float sum = 0;
    for (int i=0;i<n;i++)
    {
        sum = sum + a;
        a = a + d;
    }
    return sum;
}
int main()
{
    int n;
    float a,d;
    cin>>n>>a>>d;
    cout<<AP(a, d, n);
    return 0;
}
