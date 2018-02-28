#include <iostream>
using namespace std;
int main()

{
    int num,m,n;
    cout<<"Print Odd Numbers in a given range m to n:\n";
    cin>>m;
    cin>>n;
for (num = m; num <= n; num++)
        {
        if (num % 2 == 1)
        cout<<num;
        }
        return 0;
}
