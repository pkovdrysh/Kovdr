#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int N;

    cout << "Enter a three-digit number" << endl;
    cin >> N;

    if(N < 100 || N > 999) {
        cout << "Invalid input" << endl;
    }
    else {
        int hundred = N / 100;
        int ten = (N % 100) / 10;
        int unit = N % 10;

        int count = 0;
        if(hundred > 5 ) count++;
        if(ten > 5 ) count++;
        if(unit > 5 ) count++;
        cout << "The count of numbers greater than 5 is " << count << endl;
    }

    return 0;
}
