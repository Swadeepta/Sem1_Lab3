#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
    char s[10];
    int m;
    cout<<"\n Enter the number - ";
    cin>>s;
    m=strlen(s);
    char z;
    z=s[0];    
    s[0]=s[m-1];
    s[m-1]=z;
    cout<<"\nThe new number with swapped digits is - ";
    for(int i=0;s[i]!=s[m];i++)
    cout<<s[i]-48;
    return 0;
}
