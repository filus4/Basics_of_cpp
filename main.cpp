#include <iostream>
#include <string>

using namespace std;

int main() {

 //   int age;
 //   cout << "Enter your age: ";
 //   cin >> age;

 //   cout << "Your are " << age << " years old." << endl;


    string name;
    cout << "Enter your name: ";
    getline(cin, name); // getting and storing whole line of text instead of one charakter or intiger 

    cout << "Hello " << name << endl;


    return 0;
}