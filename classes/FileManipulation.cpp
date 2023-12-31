#include "../headers/FileManipulation.h"
#include "../headers/BinaryOperator.h"
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
    // Opening file
    inputFile.open(recivedAddress, ios::binary);

    if (!inputFile.is_open())
    {
        cerr << "Failed to open the file." << endl;
        return false;
    }
    
    // save name & address in privet members
    fileAddress = recivedAddress;
    fileName = retriveFileNameFromAddress(fileAddress);
    
    turnInToBinary();

    inputFile.close();

    return true;
}



string FileManipulation::getFileName()
{
    return fileName;
}

string FileManipulation::retriveFileNameFromAddress(string address)
{
    string tmpSubstring;
    stringstream ss(address);

    // cutting string on slashes to return last part - file name
    while(getline(ss, tmpSubstring, '/' ))
    {}
    return tmpSubstring;
}

void FileManipulation::saveAudioFile(string name, BinaryOperator binaryRepresentation)
{


    // Open an .mp3 file for writing
    ofstream mp3File(name, ios::binary);

    if (!mp3File.is_open()) {
        cerr << "Failed to open the .mp3 file for writing." << endl;
    }

    // Write the minimal MP3 header
    mp3File << "ID3"; // ID3v2 header
    mp3File.write(reinterpret_cast<const char*>(binaryRepresentation.getbinaryFileRepresentation()[0]), sizeof(binaryRepresentation.getbinaryFileRepresentation()));

    // Close the file
    mp3File.close();

    cout << "Binary data saved as output.mp3." << endl;
}
// To bo remmoved later
void FileManipulation::showBinaryRepresentation() 
{
    for (unsigned char dataByte : binaryFileRepresentation)
    {
        bitset<8> binaryByte(dataByte);
        cout << binaryByte << endl;
    }
}

