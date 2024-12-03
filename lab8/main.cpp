#include <iostream>
using namespace std;


void bubbleSort1(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void bubbleSort2(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void firstTask() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0 || n > 10) {
        cout << "Error: Invalid array size!" << endl;
        return;
    }

    int arr[10];
    cout << "Enter array's numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Your array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    bubbleSort1(arr, n);
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    bubbleSort2(arr, n);
    cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void secondTask(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;


    if (n <= 0) {
        cout << "Error" << endl;

    }


    int arr[10];
    cout << "Enter array`s numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }


    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }


    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }


    cout << "The result: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    cout << "First Task;\nSecond Task.\n Choose Task:"<<endl;
    int task;
    cin>>task;
    switch(task) {
        case 1:
            firstTask();
        break;
        case 2:
            secondTask();
        break;
        default:
            cout<<"Wrong Task"<<endl;
    }

    return 0;
}
