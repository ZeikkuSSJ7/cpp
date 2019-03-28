#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << argc << "\n";
    cout << argv[1] << "\n";
    ifstream i (argv[1]);
    if (!i.is_open()) {
        cout << "The file could not be opened!\n";
    } else {
        char x;
        while(i.get(x)){
            cout << x;
        }
    }
    return 0;
}
