#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int FindOutlier(vector<int> arr)
{
    int status = 0;
    int siz = arr.size() / 2;
    pair<int, int> zeroOne;
    for(int i = 0; i < 3; i++)
    {
        if(arr[i] % 2 == 0)
        {
            status++;
        }
    }

    status >= 2 ? (zeroOne.first = 1, zeroOne.second = -1) : (zeroOne.first = 0, zeroOne.second = 0);


    for(int i = 0; i < siz; i += 2)
    {
        if(arr[i] % 2 == zeroOne.first || arr[i] % 2 == zeroOne.second)
        {
            return arr[i];
        }
        if(arr[i+1] % 2 == zeroOne.first || arr[i+1] % 2 == zeroOne.second)
        {
            return arr[i+1];
        }

    }

    for(int i = arr.size()-1; i >= siz; i -= 2)
    {
        if(arr[i] % 2 == zeroOne.first || arr[i] % 2 == zeroOne.second)
        {
            return arr[i];
        }

        if(arr[i-1] % 2 == zeroOne.first || arr[i-1] % 2 == zeroOne.second)
        {
            return arr[i-1];
        }
    }

}


int main()
{
    vector<int> arr = {2, -6, 8, -10, -3};
    cout << FindOutlier(arr);
    return 0;
}
