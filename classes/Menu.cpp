#include "../headers/Menu.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool wrongInputFlag = false;

Menu::Menu()
{
}

void Menu::showMenu()
{
    system("clear");

    for (string item : options) 
    {
        cmdLine(item);
    }

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
