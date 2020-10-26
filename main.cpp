#include <iostream>
#include <cmath>

using namespace std;


int main() {

    bool is_male = false;
    bool is_tall = false;

    if (is_male && is_tall) {  // && --> and  ,   || --> or
        cout << "You are a tall male.";
    } else if (is_male && !is_tall) {
        cout << "You are a short male.";
    } else if (!is_male && is_tall) {
        cout << "You are tall but not a male.";
    } else {
        cout << "You are neither male nor tall.";
    }
    

    return 0;
}
