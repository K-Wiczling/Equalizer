#include <string>
#include <fstream> 

class FileManipulation
{
    public:
        FileManipulation();
        ~FileManipulation();
        void getAudioFile();
        // void saveAudioFile(std::string fileName);
        void turnInToBinary();
    
    private:
        std::ifstream inputFile;
};
