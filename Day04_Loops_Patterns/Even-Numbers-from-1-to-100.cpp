#include <iostream>
using namespace std;
int main()
{
    cout << "Even Numbers 1 To 20" << endl;
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}