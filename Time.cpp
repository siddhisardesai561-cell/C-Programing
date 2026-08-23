#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void accept()
    {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
    }

    Time add(Time t)
    {
        Time result;

        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;

        // Convert seconds into minutes
        if (result.seconds >= 60)
        {
            result.seconds = result.seconds - 60;
            result.minutes++;
        }

        // Convert minutes into hours
        if (result.minutes >= 60)
        {
            result.minutes = result.minutes - 60;
            result.hours++;
        }

        return result;
    }

    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.accept();

    cout << "\nEnter second time:" << endl;
    t2.accept();

    t3 = t1.add(t2);

    cout << "\nResultant Time = ";
    t3.display();

    return 0;
}