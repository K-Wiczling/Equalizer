#include "../headers/Encoder.h"
#include <bitset>
#include <iostream>

using namespace std;

Encoder::Encoder()
{

}

string Encoder::decode(vector<unsigned char>* fileVector)
{
    for (unsigned char dataByte : *fileVector)
    {
        bitset<8> binaryByte(dataByte);
        cout << binaryByte << endl;
    }
}

bool Encoder::encodeMessage(vector<unsigned char>* fileVector, string message)
{
    
}