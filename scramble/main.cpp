#include <iostream>

using namespace std;

bool scramble(string &s1, string &s2){
bool status = false;
  if(s1 != "" && s2 != "")
  {
      for(int i = 0; i < s2.length(); i++)
      {

          status = false;
          for(int j = 0; j < s1.length(); j++)
          {

              if(s2[i] == s1[j])
              {
                  //s1[j] = '.';
                  for(int p = j; p > s1.length() - 1; p++)
                  {
                    s1[p] = s1[p+1];
                  }
                  status = true;
                  break;
              }
          }
          if(!status)
          {
              break;
          }
      }

  }
  return status;
}

int main()
{
    string a = "rkqodlw";
    string b = "world";
   cout << scramble(a, b) << endl;
   /*cout << scramble("cedewaraaossoqqyt", "codewars") << endl;
   cout << scramble("katas", "steak") << endl;
   cout << scramble("scriptjavx", "javascript") << endl;
   cout << scramble("scriptingjava", "javascript") << endl;
   cout << scramble("scriptsjava", "javascript") << endl;
   cout << scramble("javscripts", "javascript") << endl;
   cout << scramble("aabbcamaomsccdd", "commas") << endl;
   cout << scramble("commas", "commas") << endl;
   cout << scramble("sammoc", "commas") << endl;*/
    return 0;
}
