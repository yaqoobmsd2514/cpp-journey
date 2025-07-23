#include <iostream>
using namespace std;
int main()
{
    int money, marks;
    cout << "Enter Money And Marks" << endl;
    cin >> money >> marks;
    if (marks >= 50 || money >= 50000)
    {
        cout << "Eligible" << endl;
    }
    else
    {
        cout << "Admission Neshta" << endl;
    }
    return 0;
}