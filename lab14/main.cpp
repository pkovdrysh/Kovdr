#include <iostream>
#include <random>

using namespace std;

int main() {
    int task;
    cout << "Enter task number (1 or 2):" << endl;
    cin >> task;

    switch (task) {
        case 1: {
            random_device rd;
            mt19937 gen(rd());
            uniform_real_distribution<> dist(-2, 2);

            int SIZE;
            cout << "Enter the size of array:" << endl;
            cin >> SIZE;

            double *array = new double[SIZE];

            int negative = 0, positive = 0;

            for (int i = 0; i < SIZE; i++) {
                array[i] = dist(gen);
                cout << "Array: " << array[i] << endl;

                if (array[i] >= 0) {
                    positive++;
                } else {
                    negative++;
                }
            }

            cout << "Count of positive: " << positive << endl;
            cout << "Count of negative: " << negative << endl;

            delete[] array;
            break;
        }
        case 2:
            random_device rd;
            mt19937 gen(rd());
            uniform_real_distribution<> dist(-20, 20);
            const int SIZE = 3;
            int **array = new int*[SIZE];
            for (int i = 0; i < SIZE; i++) {
                array[i] = new int[SIZE];
            }

            int odd = 0;
            int even = 0;
            cout << "Generated matrix:" << endl;
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    array[i][j] = dist(gen);
                    cout << array[i][j] << " ";
                    if (array[i][j] % 2 == 0){
                        even++;
                    }
                    else
                        odd++;

                }

            }
            cout << endl;
            cout << "Main diagonal:"<< endl;
            for (int i = 0; i < SIZE; i++){
                cout << array[i][i] << endl;
            }

            cout << "The second diagonal:"<< endl;
            for (int i = 0; i < SIZE; i++){
                cout << array[i][SIZE - 1 - i] << endl;
            }

            cout << "Pair:" << even << endl;
            cout << "Not pair:" << odd << endl;


            break;

    }
    return 0;
}
