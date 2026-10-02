#include<iostream>

using namespace std;

class Animal{
public:
    void eat(){
        cout << "Animals eat food"<< endl;
    }

};

class Dog : private Animal{
public:
    using Animal :: eat;                // unless i make this thing public i cannot access the private thing in the base class.
};


int main(){
    Dog d;
    d.eat();
}