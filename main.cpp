#include <iostream>
#include "IsKPeriodic.h"
using namespace std;

int main()
{
    string s = "abcabcabcabc";
    int k = 3;
    bool result = IsKPeriodic(s, k);
    cout << (result ? "True" : "False") << endl;
    return 0;
}