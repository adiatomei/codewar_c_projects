#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> towerBuilder(int nFloors)
{
    string result;
    vector<string> resV;
    int add = 0;
    for(int i = 1; i <= nFloors; i++)
    {
        result = "";
        for(int p = 1; p <= nFloors - i; p++)
        {
           result.push_back(' ');
        };

        for(int j = 1; j <= i + add; j++)
        {
           result.push_back('*');

        };

        for(int t = 1; t <= nFloors - i; t++)
        {
            result.push_back(' ');
        };
        resV.push_back(result);
        add += 1;
    }
    return resV;

}
int main()
{
    vector<string> result = towerBuilder(5);
    for(auto n : result)
    {
        cout << n << endl;
    }
    return 0;
}
