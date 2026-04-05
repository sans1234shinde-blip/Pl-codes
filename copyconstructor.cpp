#include<iostream>
using namespace std;

class Demo {
public:
    int a;

    // Parameterized Constructor
    Demo(int x) {
        a = x;
    }

    // Copy Constructor
    Demo(const Demo &obj) {
        a = obj.a;
    }

    void display() {
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    Demo obj1(50);
    Demo obj2 = obj1; // Copy constructor called

    obj1.display();
    obj2.display();
    return 0;
}