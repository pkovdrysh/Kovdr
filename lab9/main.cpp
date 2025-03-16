#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

void thirdTask(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: The size of the array must be positive!" << endl;

    }


    int arr[n];


    srand(time(NULL));
    cout << "Generated array: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 201 - 100; // [-100, 100]
        cout << arr[i] << " ";
    }
    cout << endl;


    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }


    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;


    cout << "Array after swapping the largest and smallest elements: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
void fourthTask(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: The size of the array must be positive!" << endl;

    }

    int arr[n];


    srand(time(NULL));
    cout << "Generated array: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 201 - 100; // [-100, 100]
        cout << arr[i] << " ";
    }
    cout << endl;

    // Введення числа A
    int A;
    cout << "Enter the number A: ";
    cin >> A;


    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > A) {
            ++count;
        }
    }


    cout << "Number of elements greater than " << A << ": " << count << endl;
}

void fifthTask(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 1) {
        cout << "Error: Array size must be greater than 1!" << endl;

    }


    int arr[n];


    srand(time(NULL));
    cout << "Generated array: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 201 - 100; // [-100, 100]
        cout << arr[i] << " ";
    }
    cout << endl;

    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }


    if (max2 == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "The second largest element is: " << max2 << endl;
    }
}
void sixthTask(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: The size of the array must be positive!" << endl;

    }


    int arr[n];


    srand(time(0));
    cout << "Generated array: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 21 - 10; // [-10, 10]
        //%11-5
        cout << arr[i] << " ";
    }
    cout << endl;


    int zeroIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            zeroIndex = i;
            break;
        }
    }


    if (zeroIndex != -1) {
        cout << "The first zero element is at index: " << zeroIndex << endl;
    } else {
        cout << "The array does not contain any zero elements." << endl;
    }
}


int main() {
    cout << "Third Task;\nFourth Task;\nFifth Task;\nSixth Task.\nChoose task:" << endl;
    int task;
    cin >> task;
    switch (task) {
        case 3:
            thirdTask();
            break;
        case 4:
            fourthTask();
            break;
        case 5:
            fifthTask();
            break;
        case 6:
            sixthTask();
        default:
            cout << "Invalid Task." << endl;
    }
    return 0;
}