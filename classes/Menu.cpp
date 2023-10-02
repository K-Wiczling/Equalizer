#include "../headers/Menu.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Menu::Menu()
{
}
void Menu::showMenu(string audioFileName)
{
    // Adding file name to the 1. menu option 
    options[0] = "1. Add audio file " + audioFileName;
    cmdLine("_____________________________________");

    // Loop over menu and display each option
    for (string item : options) 
    {
        cmdLine(item);
    }
    cmdLine("What you want to do?");
    
    // Display indication that 
    // there are no menu options for that input
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
void Menu::changeWrongInputFlag(bool stateOfInput)
{   
    // change input flag
    wrongInputFlag = stateOfInput;
}
