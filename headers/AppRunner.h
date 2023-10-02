#include <string>
#include "../headers/Menu.h"
#include "../headers/FileManipulation.h"
using namespace std;

class AppRunner
{
    public:
        AppRunner();
        ~AppRunner();

        // start program used by constructor  
        // function runs in recursive loop
        // ends only when user wish to exit program
        bool run();

        // functions to encapsulate each menu option
        void getAudioFile();
        void play();
        void encrypt();
        void decrypt();
        bool exit();

        // run when switch in run() function get to default
        bool wrongInput();

        // clear cmd and dispaly only fresh menu
        void clear();
    
    private:
        int menuImput = 0;
        string audioLocation = "";
        
        enum appState {fileAddingState, playState, encryptState, decryptState, menuState, exitState};
        
        appState runner;
        Menu mainMenu;
        FileManipulation audioFile;

};
