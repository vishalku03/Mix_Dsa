#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int minSwaps(vector<int> &nums)
     {
          int n = nums.size();
          int res = n;
          int ones = count(begin(nums), end(nums), 1);
          int j = 0;
          int count = 0;
          for (int i = 0; i < n; ++i)
          {
               while (j - i < ones)

                    count = count + nums[j++ % n];

               res = min(res, ones - count);

               count = count - nums[i];
          }
          return res;
     }
};

int main()
{
     Solution sol;
     vector<int> nums =  { 1,0,1,0,1,1,0,1};
     cout<<" minimum Swaps required : "<<sol.minSwaps(nums)<<endl;
}

// LEETCODE PROBLEM -  2134