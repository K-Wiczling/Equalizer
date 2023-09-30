#include <string>
#include <fstream> 
using namespace std;

class FileManipulation
{
    public:
        FileManipulation();
        ~FileManipulation();
        void openFile();
        // void saveAudioFile(std::string fileName);
        void turnInToBinary();
        string getFileName();
        string retriveFileNameFromAddress(string address);
    private:
        ifstream inputFile;
        string fileName = "";
        string addres = "";
};
