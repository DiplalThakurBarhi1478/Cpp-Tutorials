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

    // this is the proper method to make collection of the objects 
    
    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

    for(int i{0}; i < 4;  i++){
        animals[i]->makeSound();
    }

    return 0;
}