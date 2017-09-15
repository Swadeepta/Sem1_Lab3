#include <iostream>
using namespace std;
int main()
{
  int num=0,count=0;
  cout<<"\nENTER THE NUMBER: ";
  cin>>num;
  for(int i=2;i<num/2;i++)
  {
   if(num%i==0)
   {
                count++;
                break;
   }
  }
  if(count==0)
    cout<<"\n This is a prime number.";
  else
    cout<<"\n This is not a prime number. ";
  return 0;
}
