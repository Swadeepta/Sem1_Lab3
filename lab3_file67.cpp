#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "\n Enter a decimal number: ";
    cin >> n;
    int oct = 0;
    int rem, i = 1;

    while (n!=0)
    {
        rem= n%8;
        n /= 8;
        oct += rem*i;
        i *= 10;
    }
    cout<<"\n The equivalent octal number of "<<dec<<" is "<<oct;
    return 0;
}
