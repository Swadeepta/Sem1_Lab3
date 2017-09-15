#include <iostream>
using namespace std;

int main()
{
  char ch='0';
  cout<<"\n Enter an alphabet";
  cin>>ch;
  if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
  {
  if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    cout<<"\n The alphabet is a vowel";
  else 
    cout<<"\n The alphabet is a consonant";
  }
  else
  {
  cout<<"\n THIS IS NOT AN ALPHABET ! ! ! ! !";
  }
  return 0;
}
