#include <string>
class Menu
{
    public:
        Menu();
        void showMenu();
        void cmdLine(std::string text);
        void cmdClear();
        void changeWrongInputFlag();

};