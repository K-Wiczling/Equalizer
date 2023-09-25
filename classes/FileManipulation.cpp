#include "../headers/FileManipulation.h"
#include <string>
#include <fstream> 
#include <iostream>
#include <vector>
#include <bitset>
using namespace std;


FileManipulation::FileManipulation(){

// }
// FileManipulation::FileManipulation(string location)
// {
    inputFile.open("exe/example.txt", ios::binary);

    if (!inputFile.is_open()) {
        cerr << "Failed to open the file." << endl;
    }
}

FileManipulation::~FileManipulation()
{
    if (!inputFile.is_open()) {
        cerr << "Failed to open the file." << endl;
    }

    inputFile.close();

}

void FileManipulation::getAudioFile() 
{
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

}

void FileManipulation::turnInToBinary()
{

    if (!inputFile.is_open()) {
        cerr << "Failed to open the file." << endl;
    }

    // Create a vector to store the binary data
    vector<unsigned char> binaryData;

    // Read the file byte by byte and store it as binary data
    unsigned char byte;
    while (inputFile.read(reinterpret_cast<char*>(&byte), sizeof(byte))) {
        binaryData.push_back(byte);
    }

    for (unsigned char dataByte : binaryData) {
        std::bitset<8> binaryByte(dataByte);
        std::cout << binaryByte << " ";
    }
    cout << dec << endl;
}