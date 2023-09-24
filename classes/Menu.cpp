#include "../headers/Menu.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string options[5] = {"Add audio file","Play", "Encode", "Decode", "Exit"};
bool wrongInputFlag = false;

Menu::Menu(){

}

void Menu::showMenu(){
    system("clear");
    int i = 1;
    for (string item : options) 
    {
        string option = to_string(i) + ". " + item;
        cmdLine(option);
        ++i;
    }    
    if(wrongInputFlag) 
        cmdLine("wrong input try again");
}
void Menu::cmdLine(string text){
    cout << text << endl;
}
void Menu::cmdClear () {
    system("clear");
}

void Menu::changeWrongInputFlag(){
    wrongInputFlag = !wrongInputFlag;
}
