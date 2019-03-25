#include <iostream>
#include <cstdlib>
using namespace std;

void sum(){
    int x;
    int y;
    cout << "Please enter the two numbers: \n";
    cin >> x >> y;
    cout << "The total sum up is " << x + y << "!\n";
}
void sub(){
    int x;
    int y;
    cout << "Please enter the two numbers: \n";
    cin >> x >> y;
    cout << "The substraction is " << x - y << "!\n";
}
void mul(){
    int x;
    int y;
    cout << "Please enter the two numbers: \n";
    cin >> x >> y;
    cout << "The product is " << x * y << "!\n";
    
}
void div(){
    int x;
    int y;
    cout << "Please enter the two numbers: \n";
    cin >> x >> y;
    if (y != 0) {
        cout << "The division is " << x / y << "!\n";
    } else {
        cout << "Divide by zero is impossible!\n";
    }
}
int main(int argc, char const *argv[]){
    int option;
    while(option != 6){
        cout << "What do you want to work? \n";
        cout << "1) Add up two numbers!\n";
        cout << "2) Substract two numbers!\n";
        cout << "3) Multiply two numbers!\n";
        cout << "4) Divide two numbers!\n";
        cout << "5) Get a random number!\n";
        cin >> option;
        switch (option) {
            case 1:
                sum();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                cout << rand() % 10 << "\n";
                break;
            case 6:
                cout << "Goodbye!\n";
                break;
        }
    }
    return 1;
}
