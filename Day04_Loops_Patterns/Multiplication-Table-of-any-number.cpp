#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter The Number: " << endl;
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Multiplication of " << num << endl;
        cout << num << '*' << i << '=' << num * i << endl;
    }
    return 0;
}