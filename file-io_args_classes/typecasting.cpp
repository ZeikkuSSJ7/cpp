#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << (char) 65 << "\n";

    for(size_t i = 65; i < 124; i++) {
        cout << (char) i << " ";
    }
    
    int x = 5;
    int y = 200;

    cout << "\n" << x / y << "\n";
    cout << (float) x / y << "\n";

    return 0;
}
