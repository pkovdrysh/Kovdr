#include <iostream>
using namespace std;
int main()
{
    bool answer;
    int value;
    cout << "Enter a value: ";
    cin >> value;
    answer = (value >= 0 and value < 10) or (value*2 < 20 and value-2 > -2) or (value-1 > 1 and value /2 < 10) or value ==111;
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;

}
