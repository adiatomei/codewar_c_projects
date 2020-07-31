#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;

auto add(int n)
{
    static int num = 0;
    num += n;
    return num;

}

int main()
{
    cout << add(2)(3);
    return 0;
}
