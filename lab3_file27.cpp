#include <iostream>
using namespace std;
int main()
{
  int i=1,sum=0,n=0;
  cout<<"\n Enter the limiting number: ";
  cin>>n;
  while(i<=n)
  {
    sum+=i;
    i++;
  }
  cout<<"\n The sum of all numbers from 1 to 100 are: "<<sum;
  return 0;
}
