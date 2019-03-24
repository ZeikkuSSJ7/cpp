#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    string one;
    string two; 
    cout << "An example of string comparison!\n";
    cout << "First string: ";
    cin >> one;
    cout << "Second string: ";
    cin >> two;
    if (one == two) {
        cout << "YES!";
    } else {
        cout << "NO SHIT!";
    }

    
    return 0;
}
