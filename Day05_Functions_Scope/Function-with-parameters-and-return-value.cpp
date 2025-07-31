#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int result = sum(25, 14);
    cout << "Sum: " << result << endl;
    return 0;
}
