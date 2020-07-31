#include <iostream>
#include <map>
#include <vector>

using namespace std;

int solve(const string &s)
{
    map<char, int> alpha;
    int status = 0;
    int num = 1;
    char c = 'a';
    int sum = 0;
    int res = 0;
    vector<int> sums;
    int sizeS = 0;

    for(int i = 1; i <= 26; i++){
        alpha.insert(pair<char, int>(c, num));
        num++;
        c++;
    };

    for(auto e : s)
    {
        sizeS++;
        if(e != 'a' && e != 'e' && e != 'i' && e != 'o' && e != 'u')
        {
             for(auto t : alpha)
             {
                 if(e == t.first)
                 {
                     if(status)
                     {
                         sums.push_back(sum);
                         sum = 0;
                         status = 0;
                     }
                     sum += t.second;
                     if(sizeS == s.size())
                     {
                         sums.push_back(sum);
                     }
                 }

             }

        }else{
            status = 1;
        }
    }

    for(auto p : sums)
    {
        cout << p << endl;
        if(p > res)
        {
            res = p;
        }

    }
    return res;
}

int main()
{
     int alpha = solve("zodiacs");
     //cout << alpha;

    return 0;
}
