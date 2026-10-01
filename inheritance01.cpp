#include<iostream>

using namespace std;

class Animal{
    public:

    void eat(){
        cout << "Animals eat" << endl;
    }
};

class Dog : public Animal{
    public:
    
    void makeSound(){
        cout << "Dog barks" << endl;
    }
};


int main(){
    Dog d;
    d.eat();  // inherited function
    d.makeSound(); // own function inside the derived class.

    return 0;
}