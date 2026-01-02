#include <iostream>
using namespace std;

int main() {
    int first_num, second_num, sum;
    cout << "Enter two integer: ";          //  BTW cout means character output
    cin >> first_num >> second_num;         //  cin means character input

    // sum of two numbers stored in sum
    sum = first_num + second_num;

    cout << first_num << " + " << second_num << " = " << sum;

    return 0;
}