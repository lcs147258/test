#include <iostream>
#include <string>

class Animal {
private:
    std::string name;
    int age;
public:
    Animal(const std::string& name, int age) : name(name), age(age) {
        std::cout << "Animal " << name << " created." << std::endl;
    }

    ~Animal() {
        std::cout << "Animal " << getName() << " destroyed." << std::endl;
    }

    void setinfo(const std::string& name, int age) {
        this->name = name;
        this->age = age;
    }

    std::string getName() const {
        return name;
    }

    void shout() {
        std::cout << "Animal " << name << " is shouting." << std::endl;
    }
};

class Dog : public Animal {
private:
    std::string color;
public:
    Dog(const std::string& name, int age, const std::string& color) : Animal(name, age), color(color) {
        std::cout << "Dog " << getName() << " created." << std::endl;
    }

    ~Dog() {
        std::cout << "Dog " << getName() << " destroyed." << std::endl;
    }

    void setcolor(const std::string& color) {
        this->color = color;
    }

    void shout1() {
        shout();
        std::cout << "Dog " << getName() << " is shouting with color " << color << "." << std::endl;
    }
};

int main() {
    Dog dog("Buddy", 3, "Brown");
    dog.shout1();
    system("pause");
    return 0;
}
