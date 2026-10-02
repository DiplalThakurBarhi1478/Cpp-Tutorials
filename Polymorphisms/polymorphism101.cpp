#include<iostream>

using namespace std;

// Basic polymorphism

class Animal{
public: 
    virtual void makeSound(){
        cout << "Animal makes Sound" << endl;
    }
};


class Dog: public Animal{
public:
    void makeSound() override{
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal{
public:
    void makeSound() override{
        cout << "Cat Meow" << endl;
    }
};


int main(){

    Dog d;
    d.makeSound();

    Cat c;
    c.makeSound();

    return 0;
}