#include <iostream>
using namespace std;
int main()
{
  int a=0;
  cout<<"\n Enter the number ";
  cin>>a;
  if((a%5==0)&&(a%11==0))
    cout<<"\n The number is divisible by 5 and 11";
  else
    cout<<"\n The number is not divisible by 5 and 11";
  return 0;
}
