#include <iostream>
using namespace std;
int main()
{
    string a,str;
    int count = 1,i;
    cout << "Enter a sentence: ";
    getline(cin, a);
    for(i = 0;i <= str.length()-1;i++)
    {
        if(a[i] == '.')
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
