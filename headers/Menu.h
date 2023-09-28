#include <string>
using namespace std;
class Menu
{
    public:
        Menu();
        void showMenu(string audioFileName);
        void cmdLine(string text);
        void cmdClear();
        void changeWrongInputFlag();
    
    private:
        int menuInput;
        string options[6] = {"1. Add audio file","2. Play", "3. Encode", "4. Decode","5. Clear cmd", "6. Exit"};
};