#include <iostream>
using namespace std;
int main()
{
  char ch;
  ch='a';
  cout<<"\n The alphabets from a to z are: ";
  while(ch<='z')
  {
    cout<<"\n"<<ch;
    ++ch;
  }
  return 0;
}

