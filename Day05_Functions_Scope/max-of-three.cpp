#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Maximum is: " << maxOfThree(x, y, z) << endl;
    return 0;
}
