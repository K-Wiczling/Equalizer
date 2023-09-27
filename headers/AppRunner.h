#include <string>
#include "../headers/Menu.h"
using namespace std;

class AppRunner
{
    public:
        AppRunner();
        ~AppRunner();

        void start();
        void getAudioFile();
        void play();
        void encrypt();
        void decrypt();
        bool exit();
        bool wrongInput();
    
    private:
        enum appState {fileAddingState, playState, encryptState, decryptState, menuState};
        Menu mainMenu;
        int menuImput = 0;
        string audioLocation = "";
};
