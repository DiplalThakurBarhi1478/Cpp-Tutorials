#include<iostream>
#include<cstring>

using namespace std;

int main(){

    // character array
    char string1[7] = "Diplal";

    // empty character array
    char string2[4];

    // copying certain character array from first to second
    strncpy(string2, string1, 2);
    
    // printing the second string
    cout << string2 << endl;

    return 0;
}