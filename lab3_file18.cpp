#include <iostream>
using namespace std;
int main()
{
  float CP=0, SP=0, pro=0, loss=0;
  cout<<"\n Enter the Cost price: Rs.";
  cin>>CP;
  cout<<"\n Enter the Selling price: Rs.";
  cin>>SP;
  if(CP>SP)
  {
    loss=CP-SP;
    cout<<"\n There has been a loss of: Rs."<<loss;
  }
  else if(CP<SP)
  {
    pro=SP-CP;
    cout<<"\n There has been a profit of: Rs."<<pro;
  }
  else
  {
    cout<<"\n NO PROFIT OR LOSS INCURRED";
  }
  return 0;
}
  
