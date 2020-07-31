#include <iostream>
#include <array>
#include <map>
#include <utility>

using namespace std;

string driver(const array<string, 5> &data)
{
    string result, partRes;
    char partYear[2];
    int numF;
    int nines = 5 - data[2].length();

    //Insert surname characters
    for(int i = 0; i < data[2].length(); i++)
    {
        result.push_back(toupper(data[2][i]));
    }

    while(nines)
    {
        result.push_back('9');
        nines--;
    }

    //Insert year decade;
    int bPos = data[3].length() - 2;
    data[3].copy(partYear, 1, bPos);
    result += partYear[0];

    //Insert mounth
    partRes.push_back(data[3][3]);
    partRes.push_back(data[3][4]);
    partRes.push_back(data[3][5]);
    map<string, string> mounths = {{"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"},
                                   {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
    for(auto i : mounths)
    {
        if(i.first == partRes){
            if(data[4] == "F"){
                numF = stoi(i.second) + 50;
                result += to_string(numF);
            }else{
                result += i.second;
            }
        }
    }

    //Insert day of the mounth
    result.push_back(data[3][0]);
    result.push_back(data[3][1]);

    //Insert the year
    result.push_back(data[3][data[3].length()-1]);

    //Insert initial firstname and midlename
    result.push_back(data[0][0]);
    data[1] != "" ? result.push_back(data[1][0]) : result.push_back('9');

    //Insert 9
    result.push_back('9');

    //Insert AA
    result += "AA";

    return result;

}

int main()
{
    cout << driver({"John", "", "Smith", "01-Jan-2010", "M"});
    return 0;
}
