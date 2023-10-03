#include "../headers/Encoder.h"
#include <bitset>
#include <iostream>

using namespace std;

Encoder::Encoder()
{

}

string Encoder::decode(vector<unsigned char>* fileVector)
{
    
}

bool Encoder::encodeMessage(vector<unsigned char>* fileVector, string message)
{
    int i = 0;
    for (unsigned char dataByte : *fileVector)
    {
        dataByte += 0b00000001;
        bitset<8> binaryByte(dataByte);
    }

    return true;
}

bool Encoder::changeMessageInToBinary()
{
    // Convert each character in the string to binary
    for (char c : messageToEncode) {
        // Convert the character to its ASCII value and then to binary
        bitset<8> binaryChar(c);
        cout << binaryChar << " ";
    }

}

