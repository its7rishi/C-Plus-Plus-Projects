#include <iostream>

using namespace std;


int main() {
    cout << "A CPP Mulitiplication app by Saptarshi Majumdar\n\n";

    cout << "Enter a number to view it's multiplication table: \n";
    int num;
    cin >> num;

    int i = 0;

    while(i <= 10)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }
}