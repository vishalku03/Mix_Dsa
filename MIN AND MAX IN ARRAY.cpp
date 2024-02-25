#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     pair<long long, long long> getMinMax(long long a[], int n)
     {
          // code here
          int min;
          int max;
          sort(a, a + n);
          for (int i = 0; i < n; i++)
          {
               min = a[0];
               max = a[n - 1];
          }
          return {min, max};
     }
};

//GFG