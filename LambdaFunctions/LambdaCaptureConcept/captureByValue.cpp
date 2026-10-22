#include<iostream>

using namespace std;

int main(){
    int x = 5;

    auto captureByValue = [x](){
        cout << "Inside the Lambda Function" << endl;
        cout << x << endl;
    };
    captureByValue();

    cout << "Outside the lambda function." << endl;
    cout << x << endl;

    return 0;
}