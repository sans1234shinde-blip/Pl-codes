#include<iostream>
using namepspace std;
class A{
    public:
    void funct(){
        cout<<"I am in class A";
    }
    };
    class B{
        public:
        void funct(){
            cout<<"I am in class B";
        }
    };
    class c:public A,public B{
    };
    int main(){
        c obj;
        obj.A::funct();
        obj.B::funct();
        return 0;
    }