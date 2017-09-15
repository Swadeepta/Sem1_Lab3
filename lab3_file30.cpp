#include <iostream>
using namespace std;
int main()
{
  int i=1,n=0;
  cout<<"\n Enter the number: ";
  cin>>n;
  cout<<"\n The multiplication table goes like: ";
  for(;i<=10;i++)
  {
    cout<<"\n"<<n<<" * "<<i<<" = "<<(n*i);
  }
  return 0;
}
