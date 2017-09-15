#include <iostream>
using namespace std;
int main()
{
  int n=0;
  int i=1;
  cout<<"\n Enter the limit of the loop: ";
  cin>>n; 
  cout<<"\nThe numbers from 1 to "<<n<<" are: ";
  while(i<=n)
  {
    cout<<"\n"<<i;
    ++i;
  }
  return 0;
}
