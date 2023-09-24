#include  <iostream>
#include <string>
#include "menu.h"

using namespace std;

int menuImput = 0;
string audioLocatin = "";

// Begin
int main () {

  menu mainMenu;
  mainMenu.cmdLine("Welcome to Crypto Equalizer");
   
  mainMenu.showMenu();
 
  bool end = true;

  while(end) {
    mainMenu.showMenu();
    mainMenu.cmdLine("What you want to do?");
    cin >> menuImput;

    switch (menuImput)
    {
    case 1:
      mainMenu.cmdLine("Give me location of the audio file"); ;
      cin >> audioLocatin;
      break;

    case 2:
      mainMenu.cmdLine("Playing the song");
      break;
    
    case 3:
      mainMenu.cmdLine("Give me message to encode");
      break;

    case 4:
      mainMenu.cmdLine("Decodeing audio");
      break;

    case 5: end = false;
      break;

    default:
      mainMenu.changeWrongInputFlag();  
      break;
    }
  }
  return 0;
}
