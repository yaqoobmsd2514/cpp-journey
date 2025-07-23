#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number" << endl;
    cin >> num;
    if (num % 2 != 0)
    {
        cout << "Number is Odd" << endl;
    }
    else
    {
        cout << "Number Is Even" << endl;
    }
    return 0;
}