#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int id;
    string name;
    int age;

public:
    Employee(int empId, const string& empName, int empAge) : id(empId), name(empName), age(empAge) {}

    void work() {
        cout << "����ʱ�䣺��һ�����壬��������" << endl;
    }

    void show() {
        cout << "ְ����ţ�" << id << endl;
        cout << "ְ��������" << name << endl;
        cout << "ְ�����䣺" << age << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(int empId, const string& empName, int empAge, const string& empDepartment)
        : Employee(empId, empName, empAge), department(empDepartment) {}

    void display() {
        show();
        cout << "�������ţ�" << department << endl;
    }
};

class Salesman : public Employee {
private:
    int workYears;

public:
    Salesman(int empId, const string& empName, int empAge, int empWorkYears)
        : Employee(empId, empName, empAge), workYears(empWorkYears) {}

    void display() {
        show();
        cout << "�������ޣ�" << workYears << "��" << endl;
    }
};

int main() {
    Employee emp(1, "����", 30);
    emp.work();
    emp.show();
    cout << endl;

    Manager manager(2, "����", 35, "���۲�");
    manager.work();
    manager.display();
    cout << endl;

    Salesman salesman(3, "����", 25, 3);
    salesman.work();
    salesman.display();
    system("pause");
    return 0;
}
