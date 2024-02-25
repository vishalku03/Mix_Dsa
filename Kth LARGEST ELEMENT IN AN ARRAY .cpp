#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int findKthLargest(vector<int> &nums, int k)
     {
          int low = INT_MAX, high = INT_MIN, n = nums.size();
          for (int i = 0; i < n; i++)
          {
               low = min(low, nums[i]);
               high = max(high, nums[i]);
          }
          while (low <= high)
          {
               int mid = low + ((high - low) / 2);
               int cnt = 0;
               for (int i = 0; i < n; i++)
               {
                    if (mid >= nums[i])
                         cnt++;
               }
               // if(cnt==k) return mid;
               if (cnt < (n - k + 1))
                    low = mid + 1;
               else
                    high = mid - 1;
          }
          return low;
     }
};

// LEETCODE PROBLEM - 215