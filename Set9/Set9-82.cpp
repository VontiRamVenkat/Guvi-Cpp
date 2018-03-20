#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  float a,b;
  double area;
  cout<<"Enter length(L) and breadth(B):";
  cin>>a>>b;
  area=a*b;
  cout<<area<<setprecision(5);
      return 0;
}
