#include <iostream>
using namespace std;
int main()
{
  int n=0;
  cout<<"\n Enter the limit of the loop: ";
  cin>>n; 
  int i=n;
  cout<<"\nThe numbers from "<<n<<" to 1 are: ";
  while(i>=1)
  {
    cout<<"\n"<<i;
    --i;
  }
  return 0;
}
