#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int hours;
    int minutes;

    void addMinutes(int additionalMinutes) {
        minutes += additionalMinutes;
        hours += minutes / 60;
        minutes %= 60;
        hours %= 24;
    }
};


bool isValidTime(Time time) {
    return time.hours >= 0 && time.hours < 24 && time.minutes >= 0 && time.minutes < 60;
}

int main() {
    Time time;
    int additionalMinutes;

    cout << "Enter hours (0-23): ";
    cin >> time.hours;
    cout << "Enter minutes (0-59): ";
    cin >> time.minutes;

    if (!isValidTime(time)) {
        cout << "Invalid input time!" << endl;
        return 1;
    }

    cout << "Enter additional minutes: ";
    cin >> additionalMinutes;

    time.addMinutes(additionalMinutes);

    cout << "Resulting time: " << setw(2) << setfill('0') << time.hours << ":"
         << setw(2) << setfill('0') << time.minutes << endl;

    return 0;
}

