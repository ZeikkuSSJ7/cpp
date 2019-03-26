#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int multiply [11][11];

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            multiply[i][j] = i * j;
        }
    }

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
           cout << "[" << i << "] [" << j << "] = " << multiply[i][j] << "\n"; 
        }
    }
    
    return 0;
}
