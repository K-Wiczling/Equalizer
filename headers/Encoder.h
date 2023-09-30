#include <string>
#include <vector>
using namespace std;

class Encoder
{
    public:
        Encoder();
        ~Encoder();

        bool encodeMessage(vector<unsigned char>* fileVector, string message);
        string decode(vector<unsigned char>* fileVector);

    private:
        string messageToEncode;

};
