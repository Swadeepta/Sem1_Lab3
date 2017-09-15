#include <iostream>
using namespace std;
int main()
{
  float a=0;
  cout<<"\n Enter the number ";
  cin>>a;
  if(a>0)
    cout<<"\n The number is positive";
  else if(a<0)
    cout<<"\n The number is negative";
  else
    cout<<"The number is zero";
  return 0;
}
