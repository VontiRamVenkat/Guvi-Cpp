#include<iostream>
#include<string.h>
using namespace std;
int calc(int i){
	if(i%2==0)
	{
		cout<<i/2;
	}else{
	    cout<<i;
	}
}
int main()
    {
        int j,k;
        cout<<"Enter the testcases";
        cin>>j;
        for(int i = 0; i < j;i++)
        {
            cin>>k;
            calc(k);
            cout<<" ";
        }
    return 0;
    }
