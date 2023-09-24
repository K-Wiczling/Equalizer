#include "menu.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string options[5] = {"Add audio file","Play", "Encode", "Decode", "Exit"};
bool wrongInputFlag = false;
menu::menu(){

}

void menu::showMenu(){
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
void menu::cmdLine(string text){
    cout << text << endl;
}

void menu::changeWrongInputFlag(){
    wrongInputFlag = !wrongInputFlag;
}
