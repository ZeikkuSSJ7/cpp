#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int kirb;
    int yosh;
    cout << "Are yosh and kirb the same?\n";
    cout << "Enter kirb: ";
    cin >> kirb;
    cout << "Enter yosh: ";
    cin >> yosh;
    if (yosh == kirb) {
        cout << "They are equal.";
    }
    if (yosh > kirb) {
        cout << "yosh is greater than kirb";
    }
    if (kirb > yosh) {
        cout << "kirb is greater than yosh";
    }
    return 1;
}
