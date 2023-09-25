#include <string>

class FileManipulation
{
public:
    FileManipulation(/* args */);
    ~FileManipulation();
    void getAudioFile(std::string location);
    void saveAudioFile(std::string fileName);
    void turnInToBinary( )//input file, and pointer to the arrey of bool
};

