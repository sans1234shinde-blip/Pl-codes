#include<iostream>
using namespace std;

class Demo {
public:
    int a;

    // Default Constructor
    Demo() {
        a = 10;
    }

    void display() {
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    Demo obj;
    obj.display();
    return 0;
}