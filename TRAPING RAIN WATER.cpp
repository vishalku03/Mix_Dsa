#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int trap(vector<int> &height)
     {
          int l = 0;
          int r = height.size() - 1;
          int lmax = INT_MIN;
          int rmax = INT_MIN;
          int ans = 0;

          while (l < r)
          {
               lmax = max(lmax, height[l]);
               rmax = max(rmax, height[r]);
               ans += (lmax < rmax) ? lmax - height[l++] : rmax - height[r--];
          }
          return ans;
     }
};

// int n = height.size();
// int lmax = height[0];
// int rmax = height[n-1];
// int lpos = 1;
// int rpos = n-2;
// int water = 0;
// while(lpos <= rpos)
// {
//     if(height[lpos] >= lmax)
//     {
//         lmax = height[lpos];
//         lpos++;
//     }
//     else if(height[rpos] >= rmax)
//     {
//         rmax = height[rpos];
//         rpos--;
//     }
//     else if(lmax <= rmax && height[lpos] < lmax)
//     {
//         water += lmax - height[lpos];
//         lpos++;
//     }
//     else
//     {
//         water += rmax - height[rpos];
//         rpos--;
//     }

// }
// return water;

//     }
// };

// LEETCODE PROBLEM - 42