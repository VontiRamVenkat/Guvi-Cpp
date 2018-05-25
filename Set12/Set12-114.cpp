#include<iostream>
using namespace std;
int main(){
    int a,b,count = 0;
    cin>>a>>b;
    int n[a];
    for(int b = 0;b < a;b++){
        cin>>n[b];
    }
    for(int b = 0;b < a;b++){
        if(n[b] % 2 != 0){
            count++;
            if(count == b){
                cout<<n[b];
                break;
            }
        }
    }
    return 0;
}
