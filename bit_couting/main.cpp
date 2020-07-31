#include <iostream>

using namespace std;

unsigned int countBits(unsigned long long n){
  unsigned int bits = 0;
  //unsigned long long b = n;
  while(n > 0)
  {

    if(n % 2 != 0)
    {
      bits++;
    }
    n /= 2;
    cout << n << endl;
  }
  return bits;
}

int main()
{
    cout << countBits(21);
    return 0;
}
