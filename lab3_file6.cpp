#include <iostream>
using namespace std;
int main()
{
  int year=0;
  cout<<"\n \nEnter the year ";
  cin>>year;
  if(((year%4==0) && (year%100!=0)) || (year%400==0))
    cout<<"\n \nThis is a leap year ";
  else
    cout<<"\n \nThis is not a leap year";
  return 0;
}
