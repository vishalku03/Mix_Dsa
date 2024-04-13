class Solution
{
public:
     vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
     {
          vector<int> result;
          unordered_map<int, int> ans;

          for (auto i : nums1)
          {
               ans[i]++;
          }

          for (auto j : nums2)
          {
               if (ans.find(j) != ans.end())
               {
                    result.push_back(j);
                    ans.erase(j);
               }
          }
          return result;
     }
};

// ek vector bnayenge  -  jism ans ko store karenge
// ek map bnayenge jisme frequency aur index store karenge
// nums1 ka sare element ko map me store kar denge
// map ka element ko map se milanege aur pata krenge ki element hai ya nhi
// agar mil jayega to ham result me store kar lenge
// aur us no. ko map se delet kar denge
// aur bad me result ko  return kar denge;

// is prkar ham apn code bnayenge aur result me store kar lenge


// leetcode  - 349