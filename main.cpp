#include <iostream>
using namespace std;

class Chef {                                                    // Super class ---> Main class
    public:                                                     // Sub class ---> Class which inherited other class
        void make_chicken() {
            cout << "The chef makes yummy chicken" << endl;
        }
        void make_salad() {
            cout << "The chef makes salad" << endl;
        }
        void make_special_dish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class Italian_Chef : public Chef { // inheriting from other class
    public:
        void make_pasta() {
            cout << "The chef makes pasta" << endl;
        }
        void make_special_dish() {                  // overwriting a function from inherited class
            cout << "The chef makes pizza" << endl;
        }
};

int main() {

    Chef chef;
    chef.make_special_dish(); 

    Italian_Chef italian_chef;
    italian_chef.make_special_dish();
    

    return 0;
}
