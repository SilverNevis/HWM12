#include "IsKPeriodic.h"
#include <string>
using namespace std;

bool IsKPeriodic(string s, int k)
{
    int n = s.length();
    if (n % k != 0)
        return false;
    string sub = s.substr(0, k);
    for (int i = k; i < n; i += k)
    {
        if (s.substr(i, k) != sub)
            return false;
    }
    return true;
}