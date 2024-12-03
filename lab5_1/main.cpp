#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void firstTask() {
    double x, y;

    cout << "This program calculates the value of the function y = sin(5x) + x^2 - 1.5\n";
    for (int i = 1; i <= 5; i++) {
        cout << "Enter x: ";
        cin >> x;


        y = sin(5 * x) + pow(x, 2) - 1.5;


        cout << "For x = " << x << " y = " << y << "\n";
    }
}

void secondTask() {
    unsigned long long factorial = 1;

    cout << "Factorials of numbers from 1 to 15:\n";


    for (int i = 1; i <= 15; i++) {
        factorial *= i;
        cout << i << "! = " << factorial << "\n";
    }

}

void thirdTask() {
        double a, b, h;
        cout << "Enter start a: ";
        cin >> a;
        cout << "Enter end b: ";
        cin >> b;
        cout << "Enter step h: ";
        cin >> h;

        if (h <= 0 || a > b) {
            cout << "Error values" << endl;
            return;
        }

        // Заголовок таблиці
        cout << "-------------------" << endl;
        cout << ":   X   :    Y    :" << endl;
        cout << "-------------------" << endl;

        double x = a;
        while (x <= b) {

            if (x == 0 || x + 3 < 0) {
                cout << ":  "  << x << "  : odz   :" << endl;
                cout << "-------------------" << endl;
            }


            double y = (1 / x) + sqrt(x + 3) + 6;


            cout << ": " << x << " : " << y << " :" << endl;

            x += h;
        }

        cout << "-------------------" << endl;
}
int main() {
    cout << "First Task.;\nSecond Task;\nThird Task;\nChoose the task: " << endl;
    int task;
    cin >> task;
    switch (task) {
        case 1:
            firstTask();
        break;
        case 2:
            secondTask();
        break;
        case 3:
            thirdTask();
        break;
        default:
            cout << "Invalid Choose Task" << endl;

    }
    return 0;
}