#include<iostream>
#include<cstring>
#include<string>

using namespace std;


int main(){

    // Doing multiple operation using lambda function
    
    // case 1 : without parameter
    cout << "Printing Lambda Functions : ";
    auto sayHello = []{ 
        cout << "Hello World!" << endl;
    };

    cout << sayHello << endl;
    sayHello();



    // case 2 : with parameter and return type
    cout << "Printing lambda function with parameter :";
    auto squareOfNumber = [](int x){
        return x * x;  
        // lambda with return type
    };
    cout << squareOfNumber(5) << endl;
    

    
    // case 3 : capture list in lambda concept
    int multiplier = 10;
    auto multiply = [multiplier](int x){
        cout << x * multiplier;
    };

    multiply(3);

}