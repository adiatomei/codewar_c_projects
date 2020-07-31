#include <iostream>
#include <string>

using namespace std;

string encode(const string &str) {
  string newString = str;
  for(int i = 0; i < newString.length(); i++)
  {
      switch(newString[i])
      {
          case 'a':
          newString[i] = '1';
          break;
          case 'e':
          newString[i] = '2';
          break;
          case 'i':
          newString[i] = '3';
          break;
          case 'o':
          newString[i] = '4';
          break;
          case 'u':
          newString[i] = '5';
          break;

      }

  }
  return newString;
}

string decode(const string &str) {
  string newString = str;
  for(int i = 0; i < newString.length(); i++)
  {
      switch(newString[i])
      {
          case '1':
          newString[i] = 'a';
          break;
          case '2':
          newString[i] = 'e';
          break;
          case '3':
          newString[i] = 'i';
          break;
          case '4':
          newString[i] = 'o';
          break;
          case '5':
          newString[i] = 'u';
          break;

      }

  }
  return newString;
}

int main()
{
    cout << encode("hello") << endl;
    cout << decode("h3 th2r2") << endl;
    return 0;
}
