#include <iostream>
using namespace std;
int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << "All Array Elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Number At Index " << i << numbers[i] << endl;
    }
    return 0;
}