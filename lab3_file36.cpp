#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num=0;
  int dig=0,PROD=1;
  cout<<"\n Enter the number(INTEGER): ";
  cin>>num;
  int num1=abs(num);
  while(num1>0)
  { 
    PROD*=num1%10;
    num1=num1/10;
    dig++;
  }
  cout<<"\n Product of digits of the number is: "<<PROD; 
  return 0;
}
