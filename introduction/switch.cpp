#include <iostream>

using namespace std;

void playGame(){
    cout << "Play game called\n";
}

void loadGame(){
    cout << "Load game called\n";
}

void playMultiplayer(){
    cout << "Multiplayer game called\n";
}

int main(int argc, char const *argv[])
{
    int input;
    cout << "1. Play game\n";
    cout << "2. Load game\n";
    cout << "3. Play multiplayer\n";
    cout << "4. Exit\n";
    cin >> input;
    switch (input)
    {
        case 1:
            playGame();
            break;
        case 2:
            loadGame();
            break;
        case 3:
            playMultiplayer();
            break;
        case 4: 
            cout << "how do u mak vidyu gam\n";
            break;
        default:
            cout << "Not a valid input\n";
            break;
    }    
    return 0;
}
