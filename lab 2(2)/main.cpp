#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, y_graph;
    cout << "Enter x" << endl;
    cin >> x;
    cout << "Enter y" << endl;
    cin >> y;

    if(x >= 0 && y >= 0) {
        y_graph = -x + 2;
        cout << "y_graph = "<< y_graph << endl;
        if(y_graph >= y) {
            cout << "This number belongs to the graph" << endl;
        }
        else
            cout << "This number doesn't belong to the graph" << endl;

    }
    else
        cout << "Error(This number doesn't belong to the graph)" << endl;
    return 0;
}
