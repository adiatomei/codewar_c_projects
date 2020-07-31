#include <iostream>
#include <vector>

using namespace std;

/*vector<unsigned long long> partsSum(const vector<unsigned long long>& ls){
    vector<unsigned long long> resultLs;
    unsigned long long sum = 0;
    for(auto i : ls)
    {
       sum += i;
    }
    resultLs.push_back(sum);
    for(auto i : ls)
    {
       sum -= i;
       resultLs.push_back(sum);
    }
    return resultLs;
}*/

vector<unsigned long long> partsSum(const vector<unsigned long long>& ls){
    vector<unsigned long long> resultLs;
    unsigned long long sum = 0;
    unsigned long long rep;
    int sizeLS = resultLs.size();
    resultLs[0] = sum;
    for(auto i : ls)
    {
       sum += i;
       rep = resultLs[0];
       resultLs[0] = sum;

       resultLs[sizeLS] = rep;
    }
    resultLs.push_back(sum);

    return resultLs;
}

int main()
{
    vector<unsigned long long> a = {4, 10, 22, 3};
    vector<unsigned long long> b = partsSum(a);
    for(auto i : b)
    {

       cout << i << endl;
    }
    return 0;
}
