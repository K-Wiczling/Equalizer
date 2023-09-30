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
    inputFile.open("recivedAddress", ios::binary);

    if (!inputFile.is_open())
    {
        cerr << "Failed to open the file." << endl;
    }
    
    fileAddress = recivedAddress;
    fileName = retriveFileNameFromAddress(fileAddress);
    
    string line;
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }

    inputFile.close();
    
    return true;
}

void FileManipulation::turnInToBinary()
{

    if (!inputFile.is_open())
    {
        cerr << "Failed to open the file." << endl;
    }

    // Create a vector to store the binary data
    vector<unsigned char> binaryData;

    // Read the file byte by byte and store it as binary data
    unsigned char byte;
    while (inputFile.read(reinterpret_cast<char *>(&byte), sizeof(byte)))
    {
        binaryData.push_back(byte);
    }

    for (unsigned char dataByte : binaryData)
    {
        std::bitset<8> binaryByte(dataByte);
        std::cout << binaryByte << " ";
    }
    cout << dec << endl;
}

string FileManipulation::getFileName()
{
    return fileName;
}

string FileManipulation::retriveFileNameFromAddress(string address)
{
    vector<string> partsOfAddress;
    string tmpSubstring;
    stringstream ss(address);

    while(getline(ss, tmpSubstring, '/' ))
    {
        partsOfAddress.push_back(tmpSubstring);
    }
    return tmpSubstring;
}