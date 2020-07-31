#include <iostream>

using namespace std;

const int MAX = 3;


	int * tour(int petrol[], int distance[]) {
	    int totalDist = 0, totalPet = 0, pos = 0, status = 0;
	    static int result[MAX];
        for(int i = 0; i < MAX; i++)
        {
            totalDist = 0;
            totalPet = 0;
            status = 0;
            for(int j = i; j < MAX+i; j++)
            {
                status++;
                pos = j % MAX;
                totalDist += distance[pos];
                totalPet += petrol[pos];
                if(totalPet >= totalDist) {
                    result[j-i] = pos;
                }else{
                    break;
                };

            }

        }
        if(status < MAX)
        {
            cout << "No path found" << endl;

            return 0;
        }else{
            return result;
        }
    }


int main()
{
    int petrol[MAX] = {4,3,5};
    int dist[MAX] = {4,6,1};
    int * res = tour(petrol, dist);
    cout << "The order of gas stations is: ";
    for(int i = 0; i < MAX; i++)
    {
        cout << res[i] << ", ";
    }



    return 0;
}
