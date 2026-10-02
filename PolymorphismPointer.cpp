#include<iostream>

using namespace std;

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

    // creating a base class pointer to create a new object and points to it.

    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();


    // calling function inside the object using hte pointer by using -> sign to point the 
    
    animal1->makeSound();
    animal2->makeSound();


    return 0;
}