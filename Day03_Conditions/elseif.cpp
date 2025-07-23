#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter The Number" << endl;
    cin >> num;
    if (num >= 90){
        cout << "A Grade" << endl;
    }else if (num >= 80){
        cout << "B Grade" << endl;
    }else if (num >= 70){
        cout << "C Grade" << endl;
    }else{
        cout << "F Grade" << endl;
    }
    return 0;
}