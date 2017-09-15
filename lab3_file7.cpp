#include <iostream>
using namespace std;
int main()
{
  char ch='0';
  cout<<"Program to determine whether a character is alphabet or not.";
  cout<<"\n Enter the character ";
  cin>>ch;
  if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
    cout<<"\n The character is an alphabet";
  else 
    cout<<"\n The character is not an alphabet";
  return 0;
}
