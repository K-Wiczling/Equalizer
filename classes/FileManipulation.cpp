#include "../headers/FileManipulation.h"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <bitset>

using namespace std;

FileManipulation::FileManipulation()
{
    fileAddress = "";
    fileName = "";
}

FileManipulation::~FileManipulation()
{
    if (!inputFile.is_open())
    {
        inputFile.close();
    }

}

bool FileManipulation::openFile(string recivedAddress)
{
    inputFile.open(recivedAddress, ios::binary);

    if (!inputFile.is_open())
    {
        cerr << "Failed to open the file." << endl;
        return false;
    }
    
    fileAddress = recivedAddress;
    fileName = retriveFileNameFromAddress(fileAddress);
    turnInToBinary();

    inputFile.close();

    return true;
}

void FileManipulation::turnInToBinary()
{
    // Read the file byte by byte and store it as binary data
    unsigned char byte;
    while (inputFile.read(reinterpret_cast<char *>(&byte), sizeof(byte)))
    {
        binaryFileRepresentation.push_back(byte);
    }
}

string FileManipulation::getFileName()
{
    return fileName;
}

string FileManipulation::retriveFileNameFromAddress(string address)
{
    string tmpSubstring;
    stringstream ss(address);

    while(getline(ss, tmpSubstring, '/' ))
    {}
    return tmpSubstring;
}
void FileManipulation::showBinaryRepresentation() 
{
    for (unsigned char dataByte : binaryFileRepresentation)
    {
        bitset<8> binaryByte(dataByte);
        cout << binaryByte << endl;
    }
}