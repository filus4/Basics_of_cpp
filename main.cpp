#include <iostream>

using namespace std;

int main() {

    string phrase = "Giraffe Academy";
    string phrasesub;
    phrase[0] = 'B';
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub << endl;

    return 0;
}