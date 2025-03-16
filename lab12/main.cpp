#include <iostream>
using namespace std;

int main() {
    int task;
    cout << "Choose task 1 or 2" << endl;
    cin >> task;

    switch (task) {
        case 1: {
            cout << "Task 1:" << endl;
            int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
            int n = sizeof(vector) / sizeof(vector[0]);
            int answer = INT_MAX;

            for(int i = 0; i < n; i++){
                if(*(vector + i) < answer){
                    answer = *(vector + i);
                }
            }


            cout << "Minimum element of array: " << answer << endl;
            break;
        }
        case 2:
            cout << "Task 2" << endl;
            srand(time(NULL));
            int matrix[10][10] = { };
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    *(*(matrix + i) + j) = (i + 1) * (j + 1);
                    cout.width(4);
                    cout << *(*(matrix + i) + j);
                }
                cout << endl;
            }
    }
    return 0;
}
