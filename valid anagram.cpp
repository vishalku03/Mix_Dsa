class Solution
{
public:
     bool isAnagram(string s, string t)
     {

          unordered_map<char, int> mp1, mp2;

          for (int i = 0; i < s.size(); i++)
          {
               mp1[s[i]]++;
          }
          for (int i = 0; i < t.size(); i++)
          {
               mp2[t[i]]++;
          }
          return mp1 == mp2;

          // 2 map ka use krenge
          // dono me alag alag dalenge
          // aur dono  same ho to true and nhi to false
     }
};

method 2->class Solution
{
public:
     bool isAnagram(string s, string t)
     {
          sort(s.begin(), s.end());
          sort(t.begin(), t.end());

          return s == t;
     }
};
// leetcode  -  242