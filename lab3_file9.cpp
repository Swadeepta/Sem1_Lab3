#include <iostream>
using namespace std;

int main()
{
  char ch='0';
  cout<<"\n Enter the character ";
  cin>>ch;
  if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
    cout<<"\n The character is an alphabet";
  else if((ch>=48)&&(ch<=57))
    cout<<"\n The character is a digit";
  else
    cout<<"\n The character is a special character";
  return 0;
}
