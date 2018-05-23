#include<iostream>
using namespace std;
int main()
{
       int a,rev=0,rem;
       cout<<"Enter The Number:";
       cin>>a;
       while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	cout<<"Reverse = "<<rev;
       return 0;
}
