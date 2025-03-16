#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int const SIZE = 4;
    int odd = 0, even = 0;
    int matrix[SIZE][SIZE] = { };
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            *(*(matrix + i) + j) = rand() % 20;
            cout << *(*(matrix + i) + j) << " ";
            if (*(*(matrix + i) + j) % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }

        }

        cout << endl;

    }
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << *(*(matrix + i) + i) << " ";

    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << *(*(matrix + i) + SIZE - 1 - i) << " ";
    }
    cout << endl;
    cout << "Odd: " << odd << endl;
    cout << "Even: " << even << endl;
}