#include <iostream>
using namespace std;
int main()
{
  float a=0,b=0,c=0;
  cout<<"\nEnter three different numbers: ";
  cin>>a>>b>>c;
  cout<<"\nThe greatest number among the three is: "<<((a>b)?((a>c)?a:c):((b>c)?b:c));
  return 0;
}
