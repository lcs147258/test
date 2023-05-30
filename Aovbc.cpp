#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    std::string sex;
    int age;

public:
    Person(const std::string& name, const std::string& sex, int age)
        : name(name), sex(sex), age(age) {}
};

class Teacher : virtual public Person {
protected:
    std::string title;

public:
    Teacher(const std::string& name, const std::string& sex, int age, const std::string& title)
        : Person(name, sex, age), title(title) {}
};

class Student : virtual public Person {
protected:
    int score;

public:
    Student(const std::string& name, const std::string& sex, int age, int score)
        : Person(name, sex, age), score(score) {}
};

class Graduate : public Teacher, public Student {
private:
    double wage;

public:
    Graduate(const std::string& name, const std::string& sex, int age, const std::string& title, int score, double wage)
        : Person(name, sex, age), Teacher(name, sex, age, title), Student(name, sex, age, score), wage(wage) {}

    void show() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Sex: " << sex << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Title: " << title << std::endl;
        std::cout << "Score: " << score << std::endl;
        std::cout << "Wage: " << wage << std::endl;
    }
};

int main() {
    Graduate graduate("John Doe", "Male", 30, "Professor", 90, 5000.0);
    graduate.show();
    system("pause");
    return 0;
}
