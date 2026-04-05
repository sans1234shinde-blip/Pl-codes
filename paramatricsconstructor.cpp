#include<iostream>
using namespace std;

class Demo {
public:
    int a;

    // Parameterized Constructor
    Demo(int x) {
        a = x;
    }

    void display() {
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    Demo obj(25);
    obj.display();
    return 0;
}