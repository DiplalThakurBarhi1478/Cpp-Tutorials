#include<iostream>

using namespace std;

class Animal{
    public:
    Animal(){
        cout << "I am a constructor" << endl;
    }

    ~Animal(){
        cout << "I am a destructor" << endl;
    }
};

int main(){
    Animal animal;

    return 0;

}