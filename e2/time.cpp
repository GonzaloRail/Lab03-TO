#include <iostream>
#include <iomanip>
#include "time.h"
using namespace std;

Time::Time(const int h, const int m, const int s) {
    // Asignamos valores a los punteros
    hour = std::make_unique<int>(h);
    minute = std::make_unique<int>(m);
    second = std::make_unique<int>(s);
}

void Time::setTime(const int h, const int m, const int s) {
    *hour = h;
    *minute = m;
    *second = s;
}

void Time::print() const {
    cout << setw(2) << setfill('0') << *hour << ":"
         << setw(2) << setfill('0') << *minute << ":"
         << setw(2) << setfill('0') << *second << endl;
}

bool Time::equals(const Time& otherTime) const {
    return *hour == *otherTime.hour &&
           *minute == *otherTime.minute &&
           *second == *otherTime.second;
}
