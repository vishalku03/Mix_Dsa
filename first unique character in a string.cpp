class Solution
{
public:
     int firstUniqChar(string s)
     {

          int index = -1;
          unordered_map<char, int> mp;

          for (int i = 0; i < s.size(); i++)
          {
               char ch = s[i];
               mp[ch]++;
          }

          for (int i = 0; i < s.length(); i++)
          {
               if (mp[s[i]] == 1)
               {
                    index = i;
                    break;
               }
          }
          return index;
     }
};

// leetcode -  387