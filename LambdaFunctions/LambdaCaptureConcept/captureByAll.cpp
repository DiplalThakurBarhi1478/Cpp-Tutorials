#include<iostream>

using namespace std;

int main(){
    int x = 5;
    int y = 6;

    auto captureByAll = [=](){
       cout << x + y << endl;
    };
    
    captureByAll();

    return 0;
}