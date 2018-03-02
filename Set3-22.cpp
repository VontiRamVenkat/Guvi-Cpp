#include <iostream>
using namespace std;
int main()
{
    int num,m,i;
    float arr[100];
    cout<<"Enter a number:\n";
    cin>>m;
    for(i = 0; i < m; ++i)
    {
       cout << i + 1 << " : ";
       cin >> arr[i];
    }
for (num = 1; num <= m; num++)
        {
        
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];
        return 0;
}
