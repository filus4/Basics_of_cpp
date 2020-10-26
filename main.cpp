#include <iostream>
#include <cmath>

using namespace std;

int get_max(int num_1,int num_2, int num_3) {
    int result;

    if (num_1 >= num_2 && num_1 >= num_3) {
        result = num_1;
    } else if (num_2 >= num_1 && num_2 >= num_3) {
        result = num_2;
    } else {
        result = num_3;
    }

    return result;
}

int main() {

    cout << get_max(5, -1, 20);

    return 0;
}
