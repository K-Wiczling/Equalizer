#include <string>
#include "../headers/Menu.h"
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
    
    private:
        enum appState {fileAddingState, playState, encryptState, decryptState, menuState};
        appState runner;
        Menu mainMenu;
        int menuImput = 0;
        string audioLocation = "";
};
