#include <iostream>
using namespace std;

double roundToTwoDecimals(double num) {
    return int(num * 100 + 0.5) / 100.0;
}


int printIntegerPart(double num) {
    return int(num);
}

int main() {
    double num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << num1 << endl;
    cout << roundToTwoDecimals(num2) << endl;
    cout << num3 << endl;
    cout << roundToTwoDecimals(num4) << endl;
    cout << printIntegerPart(num5) << endl;
    return 0;
}
