#include <iostream>
//#include <climits>
using namespace std;

int main() {
    // 1. Кількість парних чисел у кожному рядку для масиву 4x3
    int m1 = 4, n1 = 3;
    int arr1[m1][n1] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
            {10, 11, 12}
    };
    cout << "Task 1: Even numbers count in each row\n";
    for (int i = 0; i < m1; i++) {
        int evenCount = 0;
        for (int j = 0; j < n1; j++) {
            if (arr1[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        cout << "Row " << i + 1 << ": " << evenCount << " even numbers\n";
    }

    // 2. Кількість парних чисел у кожному стовпчику для масиву 6x4
    int m2 = 6, n2 = 4;
    int arr2[m2][n2] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
    };
    cout << "\nTask 2: Even numbers count in each column\n";
    for (int j = 0; j < n2; j++) {
        int evenCount = 0;
        for (int i = 0; i < m2; i++) {
            if (arr2[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        cout << "Column " << j + 1 << ": " << evenCount << " even numbers\n";
    }

    // 3. Сума елементів кожного рядка для масиву 5x7
    int m3 = 5, n3 = 7;
    int arr3[m3][n3] = {
            {1, 2, 3, 4, 5, 6, 7},
            {8, 9, 10, 11, 12, 13, 14},
            {15, 16, 17, 18, 19, 20, 21},
            {22, 23, 24, 25, 26, 27, 28},
            {29, 30, 31, 32, 33, 34, 35}
    };
    cout << "\nTask 3: Sum of elements in each row\n";
    for (int i = 0; i < m3; i++) {
        int sum = 0;
        for (int j = 0; j < n3; j++) {
            sum += arr3[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << "\n";
    }

    // 4. Сума елементів кожного стовпчика для масиву 4x6
    int m4 = 4, n4 = 6;
    int arr4[m4][n4] = {
            {1, 2, 3, 4, 5, 6},
            {7, 8, 9, 10, 11, 12},
            {13, 14, 15, 16, 17, 18},
            {19, 20, 21, 22, 23, 24}
    };
    cout << "\nTask 4: Sum of elements in each column\n";
    for (int j = 0; j < n4; j++) {
        int sum = 0;
        for (int i = 0; i < m4; i++) {
            sum += arr4[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << "\n";
    }

    // 5. Максимальний елемент у масиві 3x4
    int m5 = 3, n5 = 4;
    int arr5[m5][n5] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };
    int maxVal = INT_MIN;
    int maxRow = -1, maxCol = -1;
    for (int i = 0; i < m5; i++) {
        for (int j = 0; j < n5; j++) {
            if (arr5[i][j] > maxVal) {
                maxVal = arr5[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    cout << "\nTask 5: Maximum element\n";
    cout << "Max Value: " << maxVal << " at position (" << maxRow + 1 << ", " << maxCol + 1 << ")\n";

    // 6. Мінімальний елемент у масиві 4x7
    int m6 = 4, n6 = 7;
    int arr6[m6][n6] = {
            {1, 2, 3, 4, 5, 6, 7},
            {8, 9, 10, 11, 12, 13, 14},
            {15, 16, 17, 18, 19, 20, 21},
            {22, 23, 24, 25, 26, 27, 28}
    };


    int minVal = arr6[0][0];
    int minRow = 0, minCol = 0;

    for (int i = 0; i < m6; i++) {
        for (int j = 0; j < n6; j++) {

            if (arr6[i][j] < minVal) {
                minVal = arr6[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    cout << "\nTask 6: Minimum element\n";
    cout << "Min Value: " << minVal << " at position (" << minRow + 1 << ", " << minCol + 1 << ")\n";



    int m15 = 3, n15 = 3;
    int arr15[m15][n15] = {
            {2, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;

    for (int i = 0; i < m15; i++) {
        mainDiagonalSum += arr15[i][i];
        secondaryDiagonalSum += arr15[i][m15 - i - 1];
    }

    cout << "\nTask 15: Sum of elements in diagonals\n";
    cout << "Main Diagonal Sum: " << mainDiagonalSum << "\n";
    cout << "Secondary Diagonal Sum: " << secondaryDiagonalSum << "\n";

    return 0;
}

