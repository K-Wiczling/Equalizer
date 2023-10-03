#include <iostream>
#include <limits>
#include "../headers/AppRunner.h"
#include "../headers/Encoder.h"
using namespace std;

AppRunner::AppRunner()
{
    mainMenu.cmdLine("Welcome to Crypto Equalizer");
    runner = menuState;

    // add ass a test to not add manuly file every time
    audioFile.openFile("exe/sun.mp3");
    
    run();
}
AppRunner::~AppRunner()
{
}

bool AppRunner::run()
{

    mainMenu.showMenu((audioFile.getFileName()));
    runner = menuState;
    
    // checks if input is a number to prevent crash
    while (!(cin >> menuImput))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter an integer: ";
    }

    // Logic for menu 
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
            clear();
            break;
        }
        case 6:
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
    mainMenu.changeWrongInputFlag(false);
    // Run function again if user did not choose to exit
    if (runner != exitState){
        run();
    }
    return 0;
}
void AppRunner::getAudioFile()
{
    // change state of program
    runner = fileAddingState;

    // Get address of the file and try to open the file 
    mainMenu.cmdLine("Give me location of the audio file");
    cin >> audioLocation;
    audioFile.openFile(audioLocation);

    // to be removed later
    audioFile.showBinaryRepresentation();
}
void AppRunner::play()
{
    mainMenu.cmdLine("Playing the song");
}
void AppRunner::encrypt()
{
    Encoder encd;
    encd.encodeMessage(audioFile.getbinaryFileRepresentation(), "mystical land of coding");
    audioFile.saveAudioFile("sun2.mp3");

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
    // change flag and display manu again
    mainMenu.changeWrongInputFlag(true);
    run();
    return true;
}
void AppRunner::clear() 
{
    mainMenu.cmdClear();
}