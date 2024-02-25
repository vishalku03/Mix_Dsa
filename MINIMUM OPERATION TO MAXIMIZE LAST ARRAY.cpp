#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int solve(vector<int> &nums1, vector<int> &nums2)
     {
          int n = nums1.size();
          int ans = 0;
          for (int i = 0; i < n - 1; i++)
          {
               if (nums1[i] <= nums1[n - 1] && nums2[i] <= nums2[n - 1])
                    continue;
               else if (nums1[i] <= nums2[n - 1] && nums2[i] <= nums1[n - 1])
                    ans++;
               else
                    return -1;
          }
          return ans;
     }
     int minOperations(vector<int> &nums1, vector<int> &nums2)
     {
          int ans = 1e9;
          int n = nums1.size();
          int l = solve(nums1, nums2);
          if (l != -1)
               ans = min(ans, l);
          swap(nums1[n - 1], nums2[n - 1]);
          l = solve(nums1, nums2);
          if (l != -1)
               ans = min(ans, 1 + l);
          return ans == 1e9 ? -1 : ans;
     }
};
// LEETCODE - 2934