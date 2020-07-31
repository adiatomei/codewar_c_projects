#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

/*string who_is_next(const vector<string>& names, long long r) {
  string  sol;
  vector<string> namesB = names;
  for(int i = 1; i <= r; i++)
  {
      sol = namesB.front();
      namesB.erase(namesB.begin());
      namesB.push_back(sol);
      namesB.push_back(sol);
  }
  return sol;
}*/

string who_is_next(const vector<string>& names, long long r) {
  int a = 0;
  int z = 0;
  int firstIncrease = names.size();
  int secondIncrease = 1;
  for(int i = 1; i <= names.size(); i++)
  {
     a = i;

     if(i == r)
     {
       return names[i-1];
     }

     while(z <= r)
     {
        a += firstIncrease;
        z = a + secondIncrease;

        for(int p = a; p <= z; p++)
        {

            if(p == r)
            {
                return names[i-1];
            }
        }
        firstIncrease += firstIncrease;
        secondIncrease += secondIncrease;

     }

     z = 0;
     secondIncrease = 1;
     firstIncrease = names.size();
     firstIncrease++;


  }

}

int main()
{

    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << who_is_next(names, 52);

    return 0;
}
