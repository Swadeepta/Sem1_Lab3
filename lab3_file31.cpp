#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num=0;
  int dig=0;
  cout<<"\n Enter the number(INTEGER): ";
  cin>>num;
  int num1=abs(num);
  while(num1>0)
  {
    num1=num1/10;
    dig++;
  }
  if(num!=0)
  {
    cout<<"\n The number of digits in "<<num<<" is "<<dig;
  }
  else
  {
    cout<<"\n The number of digits in "<<num<<" is 1";
  }
  return 0;
 }
 
