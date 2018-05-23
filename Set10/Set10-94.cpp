#include <iostream>
using namespace std;
int main()
{
    int N,M,i,set = 0;
    cout<<"Enter N:";
    cin>>N;
    int n[N];
    cout<<"Enter M:";
    cin>>M;
   for(i=0;i<N;i++){
        cin>>n[i];
   }
    for(i=0;i<N;i++){
       if(M==n[i])
        {
            set =1;
            cout<<"Yes";
            break;
        }
    }
    if(set == 0){
        cout<<"no";
    }
	 return 0;
  
}
