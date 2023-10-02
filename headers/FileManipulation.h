#include <string>
#include <fstream> 
#include <vector>
using namespace std;

class FileManipulation
{
    public:
        FileManipulation();
        ~FileManipulation();

        // Try to open file with given address
        bool openFile(string address);

        // saving audio file with given name  
        void saveAudioFile(string fileName);

        // Change file in to binary and store it in the vecotr
        void turnInToBinary();

        // getter for file name
        string getFileName();

        // extract file name from address
        string retriveFileNameFromAddress(string recivedAddress);
        
        // hellping function to bee removed in the production 
        void showBinaryRepresentation();
    private:
    
        ifstream inputFile;
        string fileName;
        string fileAddress;
        vector<unsigned char> binaryFileRepresentation;
};
