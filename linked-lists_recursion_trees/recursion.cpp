#include <iostream>

using namespace std;
void countt(int count){
    countt(count + 1);
}

void doll (int size){
    cout << size << endl;
    if (size == 0) {
        return;
    }
    doll(size - 1);
    
}

void printnumbers(int begin){
    cout << begin;
    if (begin < 9) {
        printnumbers(begin+ 1);
    }
    cout << begin;
}

long factorial(long num){
    long fac = 1;
    if (num > 0) {
        fac *= num;
        fac *= factorial(num - 1);
    }
    return fac;
}

int main(int argc, char const *argv[]) {
    long cap;
    cin >> cap;
    cout << factorial(cap);
    return 0;
}
