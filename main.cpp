#include <iostream>
using namespace std;

class Moovie {
    private:
        string rating;
    public:
        string title;
        string director;

        Moovie (string a_title, string a_director, string a_rating) {
            title = a_title;
            director = a_director;
            set_rating(a_rating);
        }

        void set_rating (string a_rating) {
            if (a_rating == "G" || a_rating == "PG" || a_rating == "PG-13" || a_rating == "R" || a_rating == "NR") {
                    rating = a_rating;
            } else {
                rating = "NR";
            }
        }

        string get_rating () {
            return rating;
        }
};

int main() {

      Moovie avengers("The Avengers", "Joss Whedon", "PG-13");
      
      avengers.set_rating("PG");

      cout << avengers.get_rating();

    return 0;
}
