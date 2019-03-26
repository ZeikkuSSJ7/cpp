#include <iostream>

using namespace std;

struct player {
    int level;
};


int main(int argc, char const *argv[]) {
    player str;
    player *ptr;
    
    str.level = 12;
    ptr = &str;

    cout << ptr->level;
    delete ptr;
    ptr = 0;
    return 0;
}
