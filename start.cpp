#include  <iostream>
#include <string>
using namespace std;

string menu[3] = {"Play", "Crypt", "Exit"};
int menuImput = 0;
string audioLocatin = "";
int main () {

  cout << "Welcome to Crypto Equalizer"<< endl ;
  cout << "Give me location of the audio file" << endl ;
  cin >> audioLocatin;
  int i = 1;
  for (string item : menu) {
    cout << i << ". " + item << endl;
    ++i;
  }
 
  cin >> menuImput;
  switch (menuImput)
  {
  case 1:
    cout << "Playing the song" << endl;
    break;
  case 2:
    cout << "Give me message to encrypt" << endl;
    break;
  
  default:
    break;
  }
  return 0;
}
