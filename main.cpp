#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;

        Student (string a_name, string a_major, double a_gpa) {
            name = a_name;
            major = a_major;
            gpa = a_gpa;
        }

        bool has_honors () {
            if (gpa >= 3.5) {
                return true;
            } else {
                return false;
            }
        }   
};

int main() {

      Student student_1("Jim", "Business", 2.4);
      Student student_2("Pam", "Art", 3.6);

      cout << student_2.has_honors();

    return 0;
}
