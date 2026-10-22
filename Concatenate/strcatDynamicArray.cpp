#include<iostream>
#include<cstring>

using namespace std;

int main(){
    
    // Creating dynamically allocated character array
    char* des_1 = new char[30]{'H', 'E', 'L', 'L', 'O'};
    char* des_2 = new char[30] {' ','W', 'O', 'R', 'L', 'D'};

    // printing length before concatenation
    cout << "length of the des_1 " << strlen(des_1) << endl;
    cout << "lenght of the des_2 " << strlen(des_2) << endl;

    // concatenating 
    strcat(des_1, des_2);

    // printing after concatenating
    cout << des_1 << endl;   // this is character pointer so it will give whole string 
                             // but if it is integer pointer then it would have printed the address.

    // doing some more operation on the dynamically created variable
    cout << *(des_1) << endl;

    return 0;

}