#include <iostream>
using namespace std;
int main()
{
  int num=0,tnum=0;
  cout<<"\nENTER THE NUMBER: ";
  cin>>num;
  int j=2;
  cout<<endl<<endl;
  while(j<=num)
  {
  int count=0;
  tnum=j;
  for(int i=2;i<tnum;i++)
  {
   if(tnum%i==0)
   count++;
  }
  if(count==0)
    cout<<"\n"<<tnum<<" is a prime number.";
  j++;
  }
  return 0;
}
