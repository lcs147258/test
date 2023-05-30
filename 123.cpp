#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
public:
    Box(double l = 0.0, double w = 0.0, double h = 0.0) {
        length = l;
        width = w;
        height = h;
    }
    double getVolume() const {
        return length * width * height;
    }
    Box operator+(const Box& b) const {
        Box box;
        box.length = length + b.length;
        box.width = width + b.width;
        box.height = height + b.height;
        return box;
    }
    Box operator-(const Box& b) const {
        Box box;
        box.length = length - b.length;
        box.width = width - b.width;
        box.height = height - b.height;
        return box;
    }
};

int main() {
    Box box1(1.0, 2.0, 3.0);
    Box box2(2.0, 3.0, 4.0);
    Box box3 = box1 + box2;
    Box box4 = box1 - box2;
    cout << "Box1 volume: " << box1.getVolume() << endl;
    cout << "Box2 volume: " << box2.getVolume() << endl;
    cout << "Box3 volume: " << box3.getVolume() << endl;
    cout << "Box4 volume: " << box4.getVolume() << endl;
    system("pause");
    return 0;
}
