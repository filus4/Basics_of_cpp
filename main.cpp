#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int lucky_nums[20] = {4, 8, 15, 16, 23, 42};

    lucky_nums[10] = 100;

    cout << lucky_nums[10];

    return 0;
}