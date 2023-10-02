#include <string>
using namespace std;

// Display menu, and responsible for writing anything in console 
class Menu
{
    public:
        Menu();

        // Display menu, takes audio name string 
        // to show next to "1. Add audio file"
        // it is idication that audio file has been added
        void showMenu(string audioFileName);

        // Wrapper to cout
        void cmdLine(string text);
        
        // Wrapper for clearing 
        void cmdClear();
        
        // Responsible for update input status for displaying message,
        // about wrong input  
        void changeWrongInputFlag(bool stateOfInput);
    
    private:
        int menuInput; //store input value
        bool wrongInputFlag = false; 
        // menu options
        string options[6] = {"1. Add audio file","2. Play", "3. Encode", "4. Decode","5. Clear cmd", "6. Exit"};
};      