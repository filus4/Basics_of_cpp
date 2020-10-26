#include <iostream>
#include <cmath>

using namespace std;


int main() {

   double num_1, num_2;
   char op;

   cout << "Enter first number: ";
   cin >> num_1;

   cout << "Enter operator: ";
   cin >> op;

   cout << "Enter second number: ";
   cin >> num_2;

   double result = 0;

    if (op == '+') {
        result = num_1 + num_2;
    } else if (op == '-') {
        result = num_1 - num_2;
    } else if (op == '*') {
        result = num_1 * num_2;
    } else if (op == '/') {
        result = num_1 / num_2;
    } else {
        cout << "Invalid Operator";
    }

    cout << result << endl;

    return 0;
}
