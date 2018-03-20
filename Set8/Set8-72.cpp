#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int i,set=0;
    cout<<"Enter The String:";
    getline(cin,s);
    for(i=0;i<s[i]!='\0';i++)
        if(s[i]=='a','e','i','o','u' || s[i]=='A','E','I','O','U')
        set=1;
    if(set)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}
 
