#include <iostream>
#include <cmath>

using namespace std;

void say_hi(string name, int age); // signature to tell c++ about functions below main() funcion

int main() {

    say_hi("Mike", 21);
    say_hi("Tom", 56);
    say_hi("Steve", 42);
    

    return 0;
}

void say_hi(string name, int age) {
    cout << "Hello " << name << "." << endl;
    cout << "It seems that you are " << age << " years old." << endl;
}