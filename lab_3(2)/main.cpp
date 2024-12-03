#include <iostream>
#include <cmath>
using namespace std;

int main() {

    char letter;
    cout << "Enter first letter of country" << endl;
    cin >> letter;

    switch (letter) {
        case 'A':
            cout << "The continent of Armenia is Asia. Its area is about 29,743 km²";
        break;
        case 'U':
            cout << "The continent of Ukraine is Europe. Its area is about 603 700 км²";
        break;
        case 'P':
            cout << "The continent of Poland is Europe. Its area is about 322 575 км²";
        break;
        case 'T':
            cout <<"The continent of Turkey is partly in Asia and partly in Europe. Its area is about 783 562 км²";
        break;
        case 'L':
            cout <<"The continent of Latvia is northeastern Europe. Its area is about 64 589 км²";
        break;
        case 'E':
            cout <<"The continent of Egypt is in the northeastern corner of Africa. Its area is about 1 002 000 км²";
        break;
        case 'S':
            cout <<"The continent of Span is in southwestern Europe. Its area is about 506 030 км²";
        break;
        default:
            cout <<"No information about this letter";
    }

    return 0;
}
