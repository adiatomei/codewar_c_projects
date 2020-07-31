#include <iostream>

using namespace std;

int beeramid(int bonus, double price)
{
    int nrBeer = bonus / price;
    int nrRow = 0;
    int beerR = 1;
    int add = 3;
    while(nrBeer >= beerR)
    {
        nrBeer -= beerR;
        beerR += add;
        nrRow++;
        add += 2;
    }

    return nrRow;
}

int main()
{
    cout << beeramid(455, 5);
    return 0;
}
