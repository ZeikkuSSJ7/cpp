#include <iostream>

using namespace std;

struct wagon {
    int x;
    wagon* next;
};


int main(int argc, char const *argv[]) {
    wagon* train = new wagon;
    wagon* conductor;
    train->next;
    train->x = 12;
    conductor = train;
    if (conductor != 0) {
        while(conductor->next != 0){
            conductor = conductor->next;
        }
    }
    conductor->next = new wagon;
    conductor = conductor->next;
    conductor->next = 0;
    delete conductor;
    delete train;
    while(conductor->next != 0){
        cout << conductor->next;
        conductor = conductor->next;
    }
    cout << conductor->next;
    
    return 0;
}
