#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char op;
    cout << "Enter Two Numbers" << endl;
    cin >> num1 >> num2;
    cout << "Enter Operator" << endl;
    cin >> op;
    if (op == '+')
    {
        cout << "Result: " << num2 + num2;
    }
    else if (op == '-')
    {
        cout << "Result: " << num2 - num2;
    }
    else if (op == '*')
    {
        cout << "Result: " << num2 * num2;
    }
    else if (op == '/')
    {
        cout << "Result: " << num2 / num2;
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}