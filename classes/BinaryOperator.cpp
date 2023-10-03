#include "../headers/BinaryOperator.h"
#include "../headers/FileManipulation.h"
#include <fstream>
using namespace std;

BinaryOperator::BinaryOperator()
{
    
}
void BinaryOperator::turnInToBinary(fstream inputFile)
{
    // Read the file byte by byte and store it as binary data
    // in vector object
    unsigned char byte;
    while (inputFile.read(reinterpret_cast<char *>(&byte), sizeof(byte)))
    {
        binaryFileRepresentation.push_back(byte);
    }
}
vector<unsigned char>* BinaryOperator::getbinaryFileRepresentation() 
{
    return &binaryFileRepresentation;
}