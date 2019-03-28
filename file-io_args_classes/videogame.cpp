#include <iostream>

using namespace std;

class videogame
{
private:
    char* title [80];
    char* yearOfRelease[4];
    char* console [40];
public:
    videogame();
    videogame(char title [], char console []);
    videogame(char title [], char yearOfRelease [], char console []);
    ~videogame();
    char* getTitle();
    char* getConsole();
    char* getYearOfRelease();
};

videogame::videogame() {
    this->title[0] = "none";
    this->yearOfRelease[0] = "0";
    this->console[0] = "none";
}

videogame::videogame(char title [], char console []) {
    this->title[0] = title;
    this->yearOfRelease[0] = "0";
    this->console[0] = console;
}

videogame::videogame(char title [], char yearOfRelease [], char console []) {
    this->title[0] = title;
    this->yearOfRelease[0] = yearOfRelease;
    this->console[0] = console;
}

videogame::~videogame() {
    
}
char* videogame::getTitle(){
    return this->title[0];
}
char* videogame::getYearOfRelease(){
    return this->yearOfRelease[0];
}
char* videogame::getConsole(){
    return this->console[0];
}

void printVideogame(videogame v){
    cout << "Title: " << v.getTitle() << endl;
    cout << "Year of release: " << v.getYearOfRelease() << endl;
    cout << "Console: " << v.getConsole() << endl;
}

int main(int argc, char const *argv[]) {
    char title [80];
    char yearOfRelease[4];
    char console [40];
    cout << "First videogame name: ";
    cin.getline(title, 80);
    cout << "First videogame year: ";
    cin.getline(yearOfRelease, 4);
    cout << "First videogame name of console: ";
    cin.getline(console, 40);
    videogame one(title, yearOfRelease, console);
    cout << "Second videogame name: ";
    cin.getline(title, 80);
    cout << "Second videogame name of console: ";
    cin.getline(console, 40);
    videogame two(title, console);
    cout << "Creating generic videogame...";
    videogame nulle;
    cout << "Created";
    printVideogame(one);
    printVideogame(two);
    printVideogame(nulle);
    
    return 0;
}
