#include <iostream>
#include <vector>

using namespace std;

int * nbMonths(int startPrice, int startPriceNew, int savingperMonth, float percentLossByMonth)
{
    static int mR[2];
    if(startPrice >= startPriceNew)
    {
        mR[0] = 0;
        mR[1] = startPrice - startPriceNew;
    }else
    {
        int months = 0;
        int statusMonths = -1;
        int sume = startPrice - startPriceNew;
        while(sume < 0)
        {
            if(statusMonths == 1)
            {
                percentLossByMonth += 0.5;
                statusMonths = -1;
            }

            sume += (startPrice + startPriceNew) * percentLossByMonth / 100;
            sume += savingperMonth;
            months++;
            statusMonths++;


        }
        mR[0] = months;
        mR[1] = sume;
    }

    return mR;

}

int main()

{
    int * result = nbMonths(2000, 10000, 500, 2.5);
    cout << "To buy a new car you need " << result[0] << " months and you will remain with " << result[1];
    return 0;
}
