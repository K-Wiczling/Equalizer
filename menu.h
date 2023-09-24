#include <string>
class menu
{
    public:
        menu();
        void showMenu();
        void cmdLine(std::string text);
        void cmdClear();
        void changeWrongInputFlag();

};