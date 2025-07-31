#include <iostream>
using namespace std;
void sum(int a, int b)
{
    cout << "sum of " << a << " and " << b << " = " << (a + b) << endl;
}
int main()
{
    int y = 25, n = 14;
    sum(y, n);
    return 0;
}