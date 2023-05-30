#include <iostream>

class Date {
protected:
    int year;
    int month;
    int day;

public:
    Date(int year, int month, int day) : year(year), month(month), day(day) {}

    void display() {
        std::cout << "Date: " << year << "-" << month << "-" << day << std::endl;
    }
};

class Time {
protected:
    int hour;
    int minute;
    int second;

public:
    Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {}

    void display() {
        std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
    }
};

class Datetime : public Date, public Time {
public:
    Datetime(int year, int month, int day, int hour, int minute, int second)
        : Date(year, month, day), Time(hour, minute, second) {}

    void show() {
        Date::display(); // 显式调用Date基类的display()函数
        Time::display(); // 显式调用Time基类的display()函数
    }
};

int main() {
    Datetime dt(2023, 5, 29, 12, 30, 0);
    dt.show();
    system("pause");
    return 0;
}
