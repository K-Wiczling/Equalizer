#include <iostream>
#include <limits>
#include "../headers/AppRunner.h"
#include "../headers/FileManipulation.h"
using namespace std;

AppRunner::AppRunner()
{
    start();
}
AppRunner::~AppRunner()
{
}

void AppRunner::start()
{

    mainMenu.cmdLine("Welcome to Crypto Equalizer");
    mainMenu.showMenu();
    while (!(cin >> menuImput))
    {

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter an integer: ";
    }
    mainMenu.cmdLine("What you want to do?");

    switch (menuImput)
    {
    case 1:
    {
        getAudioFile();
        break;
    }
    case 2:
    {
        play();
        break;
    }
        {
            encrypt();
            break;
        }
    case 4:
    {
        decrypt();
        break;
    }
    case 5:
    {
        exit();
        break;
    }
    default:
    {
        wrongInput();
        break;
    }
    }
}
void AppRunner::getAudioFile()
{
    mainMenu.cmdLine("Give me location of the audio file");
    cin >> audioLocation;
    FileManipulation audioFile;
    mainMenu.cmdClear();
    mainMenu.cmdLine("Content of the file:");
    audioFile.getAudioFile();
    mainMenu.cmdLine("n/Content of the file in binary:");
    audioFile.turnInToBinary();
}
void AppRunner::play()
{
    mainMenu.cmdLine("Playing the song");
}
void AppRunner::encrypt()
{
    mainMenu.cmdLine("Give me message to encrypt");
};
void AppRunner::decrypt()
{
    mainMenu.cmdLine("Give me message to encrypt");
};
bool AppRunner::exit()
{
    mainMenu.cmdLine("Bye");
    return false;
}
bool AppRunner::wrongInput()
{
    mainMenu.changeWrongInputFlag();
    mainMenu.showMenu();
    while (!(cin >> menuImput))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter an integer: ";
    }
    return true;
}