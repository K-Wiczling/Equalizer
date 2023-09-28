#include <string>
class Menu
{
    public:
        Menu();
        void showMenu(std::string audioFileName);
        void cmdLine(std::string text);
        void cmdClear();
        void changeWrongInputFlag();
    
    private:
        int menuInput;
        std::string options[5] = {"1. Add audio file","2. Play", "3. Encode", "4. Decode", "5. Exit"};
};