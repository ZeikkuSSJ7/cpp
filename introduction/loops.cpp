#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int max = 10;
    int sum = 0;
    int num;
    cout << "I will be adding up all the numbers you give me, and showing you the result!\n";
    for(int i = 0; i < max; i++){
        cout << "Give me " << max - i << " numbers!\n";
        cin >> num;
        sum += num;

    }
    cout << "Total sum up: " << sum << "\n";
    while (max != 7) {
        cout << "poyo ";
        max--;
    }
    return 0;
}
