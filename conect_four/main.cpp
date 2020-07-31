#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;


string who_is_winner(vector<string> pieces_position_list)
{
    map<string, int> grid;
    for(int i = 1; i <= 7; i++)
    {
        grid.insert(pair<string, int>("A", i));
        grid.insert(pair<string, int>("B", i));
        grid.insert(pair<string, int>("C", i));
        grid.insert(pair<string, int>("D", i));
        grid.insert(pair<string, int>("I", i));
        grid.insert(pair<string, int>("F", i));
        grid.insert(pair<string, int>("G", i));
    }

}


int main()
{

    return 0;
}
