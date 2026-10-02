#include<iostream>

using namespace std;

class Animal{
    protected:               // ************************************
        int age;
};


class Dog : public Animal{
    public:

    void setAge(int a){
        age = a;
    }

    void printAge(){
        cout <<"The age of the dog is : " <<  age << endl;
    }
};




int main(){

    Dog d;
    d.setAge(12); // this function calls the function in the drived class

    d.printAge(); // this function calls the function in the derived class 

    return 0;

}