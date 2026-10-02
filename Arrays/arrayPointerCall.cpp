#include<iostream>

using namespace std;

class Animal{
    public:
    void makeSound(){
        cout << "Animal makes Sound" << endl;
    }
};

int main(){
    Animal a;

    Animal* animal = &a; // Array pointer call method
    animal -> makeSound();  // this pointer will fetch the makeSound inside the object

    a.makeSound(); // this will also print the same thing 
    
    return 0;

}