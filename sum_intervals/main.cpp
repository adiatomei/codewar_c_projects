#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int sum_intervals(vector<pair<int, int>> intervals) {
  int sum = 0;
  pair<int, int> num;
  for(int i = 0; i < intervals.size()-1; i++)
  {
      for(int j = i+1; j < intervals.size(); j++)
      {
          if(intervals[i].second > intervals[j].second)
          {
              num = intervals[i];
              intervals[i] = intervals[j];
              intervals[j] = num;

          };
      };
     cout << intervals[i].first << " - " << intervals[i].second << endl;
  };

  for(int i = 0; i < intervals.size(); i++)
  {
     if(intervals[i].second > intervals[i+1].first)
      {
          intervals[i+1].first = intervals[i].second;

      };

     sum += (intervals[i].second - intervals[i].first);

  };


  return sum;
}

int main()
{

    vector<pair<int, int>>intervals = {
   {1,5},
   {-10, 20},
   {1, 6},
   {-16, 19},
   {5, 11}
};
    cout << sum_intervals(intervals);
    return 0;
}
