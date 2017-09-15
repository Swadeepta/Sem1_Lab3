#include <iostream>
using namespace std;
int main()
{
    int n, A = 0, B = 1, C = 0;
    cout << "\n Enter the number of terms: ";
    cin >> n;
    cout << "\n Fibonacci Series: "<<endl<<endl;
    for (int i = 1; i <= n; ++i)
    {
        
        if(i == 1)
        {
            cout << " " << A;
            continue;
        }
        if(i == 2)
        {
            cout << B << " ";
            continue;
        }
        C = A + B;
        A = B;
        B = C;
        cout << B << " ";
    }
    return 0;
}
