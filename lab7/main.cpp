#include <iostream>
#include <cmath>
using namespace std;
 void sixthTask(){
    int c0;
    cin >> c0;

    int steps = 0;


    while (c0 != 1) {
        cout << c0 << endl;
        if (c0 % 2 == 0) {
            c0 = c0 / 2;
        } else {
            c0 = 3 * c0 + 1;
        }
        steps++;
    }

    cout << c0 << endl;
    cout << "steps = " << steps << endl;
}

void seventhTask() {
     double p14 = 0.0;
     long n;
     cout << "Number of iterations? ";
     cin >> n;
     for (long i = 0; i < n; ++i) {
        p14 += pow(-1, i) * 1 / (2 * i + 1);

    }
     p14 *= 4;



     cout << "Pi = " << p14  << endl;
 }


void tenthTask() {

     int n;
     const int MAX_SIZE = 50;


         cout << "Enter the size of the square : ";
         cin >> n;


         if (n <= 1) {
             cout << "The size must be greater than 1!" << endl;
         } else if (n > MAX_SIZE) {
             cout << "Sorry, the side size is too big" << endl;
         } else {

             // Верхня сторона
             cout << '+';
             for (int i = 0; i < n - 2; i++)
                 cout << '-';
             cout << '+' << endl;

             // Бічні сторони
             for (int i = 0; i < n - 2; i++) {
                 cout << '|';
                 for (int j = 0; j < n - 2; j++)
                     cout << ' ';
                 cout << '|' << endl;
             }

             // Нижня сторона
             cout << '+';
             for (int i = 0; i < n - 2; i++)
                 cout << '-';
             cout << '+' << endl;
         }

 }

int main() {
    cout << "Sixth Task;\nSeventh Task;\nTenth Task.\n Choose task/:" << endl;
    int task;
     cin >> task;
    switch (task) {
        case 6:
            sixthTask();
        break;
        case 7:
            seventhTask();
        break;
        case 10:
            tenthTask();
        break;
        default:
            cout << "Invalid Task." << endl;
    }
    return 0;
}



