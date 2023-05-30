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
        cout << "工作时间：周一至周五，朝九晚五" << endl;
    }

    void show() {
        cout << "职工编号：" << id << endl;
        cout << "职工姓名：" << name << endl;
        cout << "职工年龄：" << age << endl;
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
        cout << "工作部门：" << department << endl;
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
        cout << "工作年限：" << workYears << "年" << endl;
    }
};

int main() {
    Employee emp(1, "张三", 30);
    emp.work();
    emp.show();
    cout << endl;

    Manager manager(2, "李四", 35, "销售部");
    manager.work();
    manager.display();
    cout << endl;

    Salesman salesman(3, "王五", 25, 3);
    salesman.work();
    salesman.display();
    system("pause");
    return 0;
}
