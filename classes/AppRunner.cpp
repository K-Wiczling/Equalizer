#include <iostream>
#include <limits>
#include "../headers/AppRunner.h"
#include "../headers/FileManipulation.h"
using namespace std;

AppRunner::AppRunner()
{
    mainMenu.cmdLine("Welcome to Crypto Equalizer");
    runner = menuState;
    run();
}
AppRunner::~AppRunner()
{
}

bool AppRunner::run()
{

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
        case 3:
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
    // Run function again if user did not choose to exit
    if (runner != exitState){
        run();
    }
    return 0;
}
void AppRunner::getAudioFile()
{
    mainMenu.cmdClear();
    mainMenu.cmdLine("Give me location of the audio file");
    cin >> audioLocation;
    FileManipulation audioFile;
    mainMenu.cmdClear();
    mainMenu.cmdLine("Content of the file:");
    audioFile.getAudioFile();
    mainMenu.cmdLine("Content of the file in binary:");
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
    runner = exitState;
    return 0;
}
bool AppRunner::wrongInput()
{
    mainMenu.changeWrongInputFlag();
    run();
    return true;
}
