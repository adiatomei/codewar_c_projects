#include <vector>
#include <utility>
#include <iostream>


using namespace std;

pair<int,int> rowWeights(const vector <int> &weights)
{
  pair<int,int> teams(0, 0);

  // Your Code is Here ... Enjoy !!
  for(int i = 0; i < weights.size(); i+=2)
  {
    teams.first += weights[i];
    if(i+1 < weights.size())
    {
      teams.second += weights[i+1];
    }
  }
  return teams;

}


int main()
{
    vector<int> test = {};
    pair<int,int> result(rowWeights(test));
    cout << result.first << " and " << result.second << endl;

    return 0;
}
