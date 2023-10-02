#include <string>
#include <vector>
using namespace std;

class Encoder
{
    public:
        Encoder();
        ~Encoder();

        // encodes message in a binary representation of the file
        bool encodeMessage(vector<unsigned char>* fileVector, string message);

        // decode message out of binary representation of the file
        string decode(vector<unsigned char>* fileVector);

    private:
        string messageToEncode;

};
