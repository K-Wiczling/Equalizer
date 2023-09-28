#include <string>
#include "../headers/Menu.h"
#include "../headers/FileManipulation.h"
using namespace std;

class AppRunner
{
    public:
        AppRunner();
        ~AppRunner();

        bool run();
        void start();
        void getAudioFile();
        void play();
        void encrypt();
        void decrypt();
        bool exit();
        bool wrongInput();
        void clear();
    
    private:
        int menuImput = 0;
        string audioLocation = "";
        
        enum appState {fileAddingState, playState, encryptState, decryptState, menuState, exitState};
        
        appState runner;
        Menu mainMenu;
        FileManipulation audioFile;

};
