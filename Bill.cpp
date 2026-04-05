#include<iostream>
using namespace std;
int main(){
    int days;
    float room,food;
    cout<<"days";
    cin>>days;
    cout<<"room charge per day";
    cin>>room;
    cout<<"food charge per day";
    cin>>food;
    cout<<"total bill is:"<<days*(room+food);
    return 0;
}