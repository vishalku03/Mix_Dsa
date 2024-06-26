class Solution
{
public:
     vector<int> findDiagonalOrder(vector<vector<int>> &nums)
     {
          ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
          vector<int> use[100000];
          int mx = 0;
          for (int i = 0; i < nums.size(); i++)
               for (int j = 0; j < nums[i].size(); j++)
                    use[i + j].push_back(nums[i][j]), mx = max(mx, i + j);
          vector<int> ans;
          for (int j = 0; j <= mx; j++)
               for (int i = (int)use[j].size() - 1; i >= 0; i--)
                    ans.push_back(use[j][i]);
          return ans;
     }
};

// leetcode - 424