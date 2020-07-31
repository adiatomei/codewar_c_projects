#include <iostream>
#include <vector>
using namespace std;

class Kata
{
public:
    vector<int> sortArray(vector<int> arr)
    {
        vector<int> newArr = arr;
        int rep = 0;
        int sizeArr = newArr.size();
        for(int i = 0; i < sizeArr-1; i++)
        {
            if(newArr[i] % 2 != 0)
            {
                for(int j = i+1; j < sizeArr; j++)
                {
                    if(newArr[j] % 2 != 0 && newArr[j] < newArr[i])
                    {
                        rep = newArr[j];
                        newArr[j] = newArr[i];
                        newArr[i] = rep;
                    }
                }
            }
        }


        return newArr;
    }
};

int main()
{
    Kata * l = new Kata;
    vector<int> a = {8, 11, 13, 4, 1, 3, 15};
    vector<int> result = l->sortArray(a);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }

    return 0;
}
