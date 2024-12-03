#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int hours;
    int minutes;
};

Time calculateDuration(const Time& start, const Time& end) {
    Time duration;
    int startMinutes = start.hours * 60 + start.minutes;
    int endMinutes = end.hours * 60 + end.minutes;

    if (endMinutes < startMinutes) {
        endMinutes += 24 * 60;
    }

    int totalMinutes = endMinutes - startMinutes;
    duration.hours = totalMinutes / 60;
    duration.minutes = totalMinutes % 60;

    return duration;
}

bool isValidTime(const Time& time) {
    return time.hours >= 0 && time.hours < 24 && time.minutes >= 0 && time.minutes < 60;
}

int main() {
    Time startTime, endTime;

    cout << "Enter start time (hours 0-23, minutes 0-59): ";
    cin >> startTime.hours >> startTime.minutes;

    if (!isValidTime(startTime)) {
        cout << "Invalid start time!" << endl;
        return 1;
    }

    cout << "Enter end time (hours 0-23, minutes 0-59): ";
    cin >> endTime.hours >> endTime.minutes;

    if (!isValidTime(endTime)) {
        cout << "Invalid end time!" << endl;
        return 1;
    }

    Time duration = calculateDuration(startTime, endTime);

    cout << "Event duration: " << duration.hours << ":"
         << setw(2) << setfill('0') << duration.minutes << endl;

    return 0;
}
