#include <vector>
#include <fstream>
using namespace std;

class BinaryOperator
{
    private:
        vector<unsigned char> binaryFileRepresentation;

    public:
        BinaryOperator(/* args */);
        void turnInToBinary(fstream inputFile);
        
        // getter for binary file represtentation
        vector<unsigned char>* getbinaryFileRepresentation();
};


