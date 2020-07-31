#include <iostream>

using namespace std;

int solution(string roman) {
  int sol = 0;
  // Your code here
  for(int i = 0; i < roman.length(); i++)
  {

    switch(roman[i])
    {
      case 'I':
          sol += 1;
      break;
      case 'V':
        if(roman[i-1] == 'I')
        {
            sol += 3;
        }
        else
        {
            sol += 5;
        }
      break;
      case 'X':
        if(roman[i-1] == 'I')
        {
            sol += 8;
        }
        else
        {
            sol += 10;
        }
      break;
      case 'L':
        if(roman[i-1] == 'X')
        {
            sol += 30;
        }
        else
        {
            sol += 50;
        }
      break;
      case 'C':
        if(roman[i-1] == 'X')
        {
            sol += 80;
        }
        else
        {
            sol += 100;
        }
      break;
      case 'D':
        if(roman[i-1] == 'C')
        {
            sol += 300;
        }
        else
        {
            sol += 500;
        }
      break;
      case 'M':
         if(roman[i-1] == 'C')
        {
            sol += 800;
        }
        else
        {
            sol += 1000;
        }
      break;
      default:
        cout << "Error";
    }
    cout << sol << endl;
  }
  return sol;
}

int main()
{
    cout << solution("X");
    return 0;
}
