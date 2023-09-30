#include <string>
#include <fstream> 
#include <vector>
using namespace std;

class FileManipulation
{
    public:
        FileManipulation();
        ~FileManipulation();
        bool openFile(string address);
        void saveAudioFile(string fileName);
        void turnInToBinary();
        string getFileName();
        string retriveFileNameFromAddress(string recivedAddress);
        void showBinaryRepresentation();
    private:
        ifstream inputFile;
        string fileName;
        string fileAddress;
        vector<unsigned char> binaryFileRepresentation;
};
