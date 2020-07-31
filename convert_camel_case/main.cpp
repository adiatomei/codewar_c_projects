#include <iostream>
#include <string>
#include <cctype>
using namespace std;




string to_camel_case(string text) {
  // TODO: Your code goes here!
  string newText = text;
  int moveLeft = 0;
  int pos = -1;
  int tLe = newText.length();
  for(int i = 0; i < tLe; i++)
  {
      if(newText[i] == '-')
      {
          moveLeft = 1;
          pos++;
          newText[i - pos] = toupper(newText[i+moveLeft]);

      }
      else if(moveLeft)
      {

          newText[i - pos] = newText[i+moveLeft];

      }
      else
      {
          newText[i] = newText[i];
      }

      if( i == tLe - 1)
      {
          newText[i] = newText[i + 1];
      }

  }

  return newText;

}

int main()
{

    cout << to_camel_case("the-stealth-warrior");

    return 0;
}
