#include <iostream>

using namespace std;

class Computer {
private:
    int processorspeed;
public:
    Computer();
    Computer(int speed);
    ~Computer();
    void setspeed (int processorspeed);
    int getspeed();
};

Computer::Computer () {
    this->processorspeed = 0;
}

Computer::Computer (int speed) {
    this->processorspeed = speed;
}

Computer::~Computer() {
    
}

void Computer::setspeed (int processorspeede) {
    processorspeed = processorspeede;
}

int Computer::getspeed () {
    return processorspeed;
}

int main(int argc, char const *argv[]) {
    Computer pentium;
    cout << pentium.getspeed() << "\n";
    pentium.setspeed(1500);
    cout << pentium.getspeed() << "\n";
    Computer pentium4 (1500);
    cout << pentium4.getspeed();
    return 0;
}
