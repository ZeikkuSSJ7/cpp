#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int *ptr = new int;
    
    for(int i = 0; i < 4; i++) {
        if (i == 0) {
            ptr = &i;   
        }
        cout << *ptr << " and " << i << "\n";
    }
    int s = 10;
    cout << *ptr;
    s = *ptr;
    cout << s;
    delete ptr;
    ptr = 0;
    return 0;
}
