#include "../headers/Menu.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool wrongInputFlag = false;

Menu::Menu()
{
}

void Menu::showMenu(string audioFileName)
{
    options[0] = "1. Add audio file " + audioFileName;
    cmdLine("_____________________________________");

    for (string item : options) 
    {
        cmdLine(item);
    }
    cmdLine("What you want to do?");
    
    if(wrongInputFlag) 
        cmdLine("wrong input try again");
}
void Menu::cmdLine(string text)
{
    cout << text << endl;
}
void Menu::cmdClear () 
{
    system("clear");
}

void Menu::changeWrongInputFlag()
{   
    wrongInputFlag = !wrongInputFlag;
}
