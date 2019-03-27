#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
    char str[50];
    // opens (or creates) file register.txt, ios::app appends the content injected
    ofstream reg ("file-io_args_classes/register.txt", ios::app );
    // adds new line to register
    reg << "Today has been a day\n";
    // close file
    reg.close();
    // opens file register.txt
    ifstream regin ("file-io_args_classes/savefile.txt");
    if (!regin.is_open()) {
        cout << "The file could not be opened";
    } else {
        for(size_t i = 0; i < strlen(str); i++){
            regin.getline(str, 50, '\n');
            cout << str << "\n";
        }
    }
}