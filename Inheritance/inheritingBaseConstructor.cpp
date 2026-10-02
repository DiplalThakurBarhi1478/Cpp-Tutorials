#include<iostream>

using namespace std;

class Person{
public:
    string fullname;
    int age;

    Person(string s, int n){
        fullname = s;
        age = n;
    }

    void result(){
        cout << "Name : " << fullname << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person{
public:
        using Person :: Person;
};

int main(){
    Student s("Diplal", 19);
    s.result();

    return 0;
}