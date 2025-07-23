#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter Three Numbers" << endl;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << "Greatest Number is: " << a;
    }
    else if (b >= a && b >= c)
    {
        cout << "Greatest Number is: " << b;
    }
    else
    {
        cout << "Greatest Number is: " << c;
    }
    return 0;
}