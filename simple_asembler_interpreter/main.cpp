#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;


unordered_map<string, int> assembler(const vector<string>& program)
{
  int num;

  for(auto n : program)
  {
      if(n[0] == 'm')
      {
          for(auto t : n)
          {
              if(isdigit(t))
              {
                  num = t;
              }
          }
      }
      else if(n[0] == 'i')
      {
          m++;
      }
      else if(n[0] == 'd')
      {
          m--;
      }
      else if(n[0] == 'j')
      {

      }
  }
}

int main()
{

    return 0;
}
