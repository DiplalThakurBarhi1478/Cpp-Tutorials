#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

// strlen()
// sizeof()


int main(){

    char message1 [] {"The sky is blue."};
    char* message2 [] {"The sky is blue."}; 
    //Array decays into the pointer

    cout << "Message1 : " << message1 << endl;

    // strlen ignores the null character
    cout << "strlen(message1) : " << strlen(message1) << endl;

    // sizeof include the null character
    cout << "sizeof(message1) : " << sizeof(message1) << endl;

    // strlen still works with decayed arrays
    // cout << "strlen(message2) : " << strlen(message2) << endl;


    //prints size of pointer
    cout << "sizeof(message2) : " << sizeof(message2) << endl;

    // Operation on the two type of variables.
    cout << *message2 << endl;


    return 0;


}