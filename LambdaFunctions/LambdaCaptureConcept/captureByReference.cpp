#include<iostream>

using namespace std;

int main(){

    int x = 5;
    auto captureByReference = [&x](){
        cout << "Inside the lambda function" << endl;
        x = 10;
        cout << x << endl;
    };
    captureByReference();

    cout << "Outside the lambda function" << endl;
    cout << x << endl;

    return 0;
}