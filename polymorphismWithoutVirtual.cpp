#include<iostream>

using namespace std;

class Animal{
public: 
    void makeSound(){
        cout << "Animal makes Sound" << endl;
    }
};


class Dog: public Animal{
public:
    void makeSound(){
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal{
public:
    void makeSound(){
        cout << "Cat Meow" << endl;
    }
};


int main(){

    Animal* animal = new Dog();

    // animal points to the new object of dog but while calling the function inside it , it is giving me the answer of the base class.

    animal -> makeSound(); 

    // when they call since it is not a virtual so it asks for the type of the pointer, it tells it is Animal* as a pointer which 
    // is a base class so when it asks for sound it makes the base class to sound.

    return 0;
}