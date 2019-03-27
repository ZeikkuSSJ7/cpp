#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
    // using cin.getline to introduce a whole line
    char string [50];
    cout << "Introduce a line: ";
    cin.getline(string, 50);
    cout << "You introduced: " << string << "\n";

    // using string comparison
    char word [9];
    char another_word [9];

    cout << "Introduce mountain: ";
    cin.getline(word, 9, '\n');

    cout << "Introduce sun: ";
    cin.getline(another_word, 9, '\n');

    cout << word << " " << another_word << "\n";
    cout << strcmp(word, another_word) << "\n";
    
    // string concat
    char concat [18]; // create new string for concatenating other words
    cout << strcat(strcat(concat, word), another_word) << "\n"; // concat the two words together

    // string copy
    strcpy(word, another_word);
    cout << word << "\n";

    // string length
    cout << strlen(concat);

    return 0;
}
