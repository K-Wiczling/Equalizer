#include <iostream>
#include <string>
#include <limits>
#include "headers/Menu.h"
#include "headers/FileManipulation.h"
using namespace std;

int menuImput = 0;
string audioLocation = "";

// Begin
int main () {

  Menu controls;
  controls.cmdLine("Welcome to Crypto Equalizer");
   
  controls.showMenu();
 
  bool end = true;

  controls.showMenu();
  controls.cmdLine("What you want to do?");

  while (end)
  {
    controls.showMenu();
    // cin >> menuImput;
    while (!(cin >> menuImput)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalid input. Please enter an integer: ";
    }
    end = false;
    switch (menuImput)
    {
      case 1:
      {

        controls.cmdLine("Give me location of the audio file");
        cin >> audioLocation;
        FileManipulation audioFile;
        controls.cmdClear();
        controls.cmdLine("Content of the file:");
        audioFile.getAudioFile();
        controls.cmdLine("n/Content of the file in binary:");
        audioFile.turnInToBinary();
        break;
      }

      case 2:
        controls.cmdLine("Playing the song");
        break;
      
      case 3:
        controls.cmdLine("Give me message to encode");
        break;

      case 4:
        controls.cmdLine("Decodeing audio");
        break;

      case 5: end = false;
        break;

      default:
        end = true;
        controls.cmdLine("Invalid input, try again");
        controls.changeWrongInputFlag();
        break;
    }
  }
  return 0;
}
