#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int getMinDiff(int arr[], int n, int k)
     {

          sort(arr, arr + n);

          int ans = arr[n - 1] - arr[0];

          int mini, maxi;

          int smallest = arr[0] + k;
          int largest = arr[n - 1] - k;

          for (int i = 0; i < n; i++)
          {
               maxi = max(largest, arr[i] + k);
               mini = min(smallest, arr[i + 1] - k);

               if (mini < 0)
                    continue;

               ans = min(ans, maxi - mini);
          }
          return ans;
     }
};

//  GFG