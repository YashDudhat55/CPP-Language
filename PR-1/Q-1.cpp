#include <iostream>
using namespace std;

class Time_Converter
{
private:
    int totalSeconds;
    int hours, minutes, seconds;

public:
    void setSecondsToTime()
    {
        cout << endl
             << endl;

        cout << "Enter total seconds : ";
        cin >> totalSeconds;

        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;

        hours = minutes / 60;
        minutes = minutes % 60;
    }

    void getSecondsToTime()
    {
        cout << endl
             << endl;

        cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;

        cout << endl;
    }

    void setTimeToSeconds()
    {
        cout << endl
             << endl;

        cout << "Enter Hours : ";
        cin >> hours;

        cout << "Enter Minutes : ";
        cin >> minutes;

        cout << "Enter Seconds : ";
        cin >> seconds;
    }

    void getTimeToSeconds()
    {
        cout << endl
             << endl;

        int total = seconds;
        total += minutes * 60;
        total += hours * 60 * 60;

        cout << "Total Seconds : " << total << endl;

        cout << endl;
    }
};