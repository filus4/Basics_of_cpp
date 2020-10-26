#include <iostream>
#include <cmath>

using namespace std;

double cube(double num) {
    double result = num * num * num;
    return result;
}   

int main() {

    double answer = cube(5.0);
    cout << answer << endl;

    cout << cube(2.5);
    

    return 0;
}
