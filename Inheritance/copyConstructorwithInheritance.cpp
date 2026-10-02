#include<iostream>
#include<string>

using namespace std;

class Person{
protected:
    string name;

public:
    Person(string n): name(n)
    {

    }

    Person(const Person& other):name(other.name)
    {
        cout << "Person copy constructor" << endl;
    }

};

class Student: public Person{
    private:
        int rollno;

    public:
        Student(string n, int r):Person(n), rollno(r)   // this is built for only to pass the string and integer not the object
        {

        }

        Student(const Student& other)
        :Person(other), rollno(other.rollno)  // this is built to copy the constructor and pass object in the constructor
        {
            cout << "Student copy constructor" << endl;
        }

        // Explanation
        // const Student& other       ---> this is a parameter 
        // Student                    ---> here Student represent the type
        // &                          ---> this represent the referencing
        // other                      ---> this is another variable

        void display(){
            cout << "Name : " << name << endl;
            cout << "Roll Number : " << rollno << endl;
        }


};



int main(){
    Student s1("Diplal", 26); // this is just passing variables
    Student s2 = s1;          // this passes object inside the object
    Student s3 = s2;          // this passes object again inside the new object.
    
    s2.display();
    s3.display();
    return 0;




}