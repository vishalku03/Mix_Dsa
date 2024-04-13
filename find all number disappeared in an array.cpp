class Solution
{
public:
     vector<int> findDisappearedNumbers(vector<int> &nums)
     {
          vector<int> ans;
          unordered_map<int, int> mp;

          for (int it : nums)
          {
               mp[it]++;
          }
          for (int i = 1; i <= nums.size(); i++) // ham yaha 1 se n tak sare dekhenge ki hai ya nhi
          {
               if (mp[i] == 0)
                    ans.push_back(i);
          }

          return ans;
     }
};
//leetcode 448