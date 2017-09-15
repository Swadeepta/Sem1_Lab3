#include <iostream>
using namespace std;
int main()
{
  float s1,s2,s3;
  cout<<"\n Enter the three angles of the triangle: ";
  cin>>s1>>s2>>s3;
  if(((s1+s2)>s3)&&((s2+s3)>s1)&&((s3+s1)>s2))
  { 
    if(s1==s2 && s2==s3)
     cout<<"\n THE TRIANGLE IS AN EQUILATERAL TRIANGLE";
    else if(s1==s2 || s1==s3 || s2==s3)
     cout<<"\n THE TRIANGLE IS AN ISOSCELES TRIANGLE";
    else
     cout<<"\n THE TRIANGLE IS A SCALENE TRIANGLE";
  }
  else
  {
    cout<<"\n THE SUM OF ANY TWO SIDES OF A TRIANGLE IS GREATER THAN THE THIRD SIDE";
    cout<<"\nHence, this cannot be a triangle";
  }
  return 0;
}
