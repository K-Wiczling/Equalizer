#include <string>
#include <fstream> 
using namespace std;

class FileManipulation
{
    public:
        FileManipulation();
        ~FileManipulation();
        bool openFile(string address);
        // void saveAudioFile(std::string fileName);
        void turnInToBinary();
        string getFileName();
        string retriveFileNameFromAddress(string recivedAddress);
    private:
        ifstream inputFile;
        string fileName;
        string fileAddress;
};
