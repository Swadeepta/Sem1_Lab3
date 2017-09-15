#include <iostream>
using namespace std;
int main()
{
  float unit, total;
  cout<<"\n Enter the ELECTRICITY UNIT consumed: ";
  cin>>unit;
  if(unit<=50)
  {
    total=unit*0.5;
    cout<<"\n The total Electricity charges incurred is: "<<total;
  }
  else if(unit>50 && unit<=100)
  {
    total=50*0.5+(unit-50)*0.75;
    cout<<"\n The total Electricity charges incurred is: "<<total;
  }
  else if(unit>100 && unit<=200)
  {
    total=50*0.5+100*0.75+(unit-150)*1.2;
    cout<<"\n The total Electricity charges incurred is: "<<total;
  }
  else
  {
    total=50*0.5+100*0.75+100*1.2+(unit-250)*1.5;
    cout<<"\n The total Electricity charges incurred is: "<<total;
  }
  total=total+total*0.2; 
  cout<<"\nIncluding the Surcharge the total amounts to: "<<total;
  return 0;
}
