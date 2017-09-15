#include <iostream>
using namespace std;
int main()
{
  char ch='0';
  cout<<"\n Enter the character ";
  cin>>ch;
  if((ch>=65)&&(ch<=90))
    cout<<"\n The character is an UPPERCASE alphabet";
  else if((ch>=97)&&(ch<=122))
    cout<<"\n The character is a LOWERCASE alphabet";
  else
    cout<<"\n IT IS NOT AN ALPHABET ! ! ! !";
  return 0;
}
