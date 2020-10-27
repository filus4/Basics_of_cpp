#include <iostream>

using namespace std;

/*
    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;
*/

int main() {

    int age = 19;
    int *pAge = &age; // storing a pointer in variable

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;

    cout << pAge << endl; 

    cout << *pAge << endl; // dereferencing pointer
    cout << *&gpa; // its possible to join * and & together

    return 0;
}
