#include<iostream>
#include<cstring>

using namespace std;

int main(){
    // concatenating the characters arrays using library
    // provided: 
    // destination array should have sufficient memory
    // What exactly memory mean: first character array will have characters and null characters.

    char string1 [11] = "Hello";  // 5
    char string2 [6] = "World";   // 5

    //checking length of string1 before concatenation
    cout << strlen(string1) << endl;
    cout << strlen(string2) << endl;

    //doing concatenation of second string to the first string
    strcat(string1, string2);

    // printing the concatenated string
    cout << string1 << endl;

    //checking length of string1 before concatenation
    cout << strlen(string1) << endl;  // 10
    cout << strlen(string2) << endl;  // 5
    
return 0;


}