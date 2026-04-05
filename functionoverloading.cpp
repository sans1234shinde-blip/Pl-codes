#include<iostream>
using namespace std;
class comp{
    public:
    void add(int a,int b){
        cout<<"Integer sum="<<a+b<<endl;
    }
    void add(double a,double b){
        cout<<"float sum="<<a+b;
    }
    };
    int main(){
        comp gfg;
        gfg.add(10,2);
        gfg.add(5.3,6.2);
        return 0;
    }