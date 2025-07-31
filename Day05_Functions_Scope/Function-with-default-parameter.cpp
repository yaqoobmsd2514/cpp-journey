#include <iostream>
using namespace std;
int sum(int a, int b = 14)
{
    return a + b;
}
int main()
{
    cout << "Sum(25): " << sum(25) << endl;
    cout << "Sum(25,14): " << sum(25, 14) << endl;
    return 0;
}