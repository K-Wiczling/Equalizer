#include <string>
#include <fstream> 
using namespace std;

class FileManipulation
{
    public:
        FileManipulation();
        ~FileManipulation();
        void getAudioFile();
        // void saveAudioFile(std::string fileName);
        void turnInToBinary();
        string getFileName();
    private:
        ifstream inputFile;
        string fileName = "";
        string addres = "";
};
