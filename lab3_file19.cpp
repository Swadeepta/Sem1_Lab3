#include <iostream>
using namespace std;
int main()
{
  float p=0,c=0,m=0,b=0,cp=0;
  float per=0;
  char gr='a';
  cout<<"\n Enter the marks in Physics(out of 100): ";
  cin>>p;
  cout<<"\n Enter the marks in Chemistry(out of 100): ";
  cin>>c;
  cout<<"\n Enter the marks in Mathematics(out of 100): ";
  cin>>m;
  cout<<"\n Enter the marks in Biology(out of 100): ";
  cin>>b;
  cout<<"\n Enter the marks in Computer(out of 100): ";
  cin>>cp;
  per=(p+c+m+b+cp)/5;
  if(per>=90)
  {
    gr='A';
  }
  else if(per>=80 && per<90)
  {
    gr='B';
  }
  else if(per>=70 && per<80)
  {
    gr='C';
  }
  else if(per>=60 && per<70)
  {
    gr='D';
  }
  else if(per>=40 && per<60)
  {
    gr='E';
  }
  else
  {
    gr='F';
  }
  cout<<"\n You have scored "<<per<<"% and "<<gr<<" GRADE";
  return 0;
}
