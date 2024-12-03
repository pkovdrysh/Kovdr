#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double x, y, z;

    cout << "Enter x" << endl;
    cin >> x;
    if(x >= 0) {
        y = cos(x) - cbrt(sin(x));
        cout <<"Your answer is: "<<y<<endl;
    }
    else {

        z = x * exp(-x) + 1 / (x - 1.3);
        cout <<"Your answer is: "<<z<<endl;
    }
    return 0;
}
