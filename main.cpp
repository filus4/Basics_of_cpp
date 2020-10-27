#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book () {
            title = "No Title";
            author = "No Author";
            pages = 0;
        }

        Book (string a_title, string a_author, int a_pages) {
            title = a_title;
            author = a_author;
            pages = a_pages;
        }

};

int main() {

    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the Rings", "Tolkien", 700);

    cout << book1.title << endl;    

    return 0;
}
