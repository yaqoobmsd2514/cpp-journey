#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter Your Age" << endl;
    cin >> age;
    if (age > 0){
        if (age >= 18){
            cout << "You are eligible to vote" << endl;
        }else{
            cout << "You are Not eligible to vote" << endl;
        }
    }else{
        cout << "Invalid Age" << endl;
    }
    return 0;
}