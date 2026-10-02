#include<iostream>

using namespace std;

class Person{
public:

    
    string name = "Person";
    
};

class Student : public Person{
public:
    
    
    string name = "Student";
};

int main(){
    Student s;

    cout << s.name << endl;  // this prints only the student object name because it can reach out easily inside the student part.
    return 0;
}