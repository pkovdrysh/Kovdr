#include <iostream>
#include <cmath> // For std::abs
using namespace std;

int main() {

    const double epsilon = 0.000001;


    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;


    if (num1 == 0 || num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;
    }


    float result1 = 1.0f / num1;
    float result2 = 1.0f / num2;


    if (abs(result1 - result2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}
