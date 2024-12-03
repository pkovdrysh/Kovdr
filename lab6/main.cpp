#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;


    cout << "Enter natural number N: ";
    cin >> N;


    if (N <= 0) {
        cout << "Error! Number is not a natural" << endl;
        return 1;
    }


    while (N > 0) {
        int num = N % 10;
        if (num > 2 && num % 2 != 0) {
            sum += num;
        }
        N /= 10;

    }


    cout << "Sum of numbers greater than 2 and odd: " << sum << endl;

    return 0;
}
