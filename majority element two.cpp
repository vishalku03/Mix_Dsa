class Solution
{
public:
     vector<int> majorityElement(vector<int> &nums)
     {
          unordered_map<int, int> result;

          vector<int> ans;

          for (int num : nums)
          {
               result[num]++;
          }
          int n = nums.size();
          for (auto &final : result)
          {
               if (final.second > n / 3)
               {
                    ans.push_back(final.first);
               }
          }
          return ans;
     }
};

// int this question the spce complexitty is more
 

 // ;leetcode - 229