#include <iostream>
#include <string>

using namespace std;

string rot13(string msg)
{
  int add;
  int let;
  for(int i = 0; i < msg.length(); i++)
  {

      if(isalpha(msg[i]))
      {

          if(islower(msg[i]))
          {
             let = msg[i];
             let += 13;

             if(let > 122)
             {
                 let = msg[i];
                 add = (let + 13 - 122);
                 let = 96 + add;

             }
               msg[i] = let;

          }
          else
          {
             let = msg[i];
             let += 13;

             if(let > 122)
             {
                 let = msg[i];
                 add = (let + 13 - 122);
                 let = 64 + add;

             }
               msg[i] = let;
          }

      }
  }
  return msg;
}


int main()
{
    string result = rot13("zarzavat12");
    cout << result << endl;
    return 0;
}
