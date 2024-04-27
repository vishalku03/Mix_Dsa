class Solution
{
public:
     bool isSubsequence(string s, string t)
     {
          int a = s.size();
          int b = t.size();
          int i = 0, j = 0;

          while (j < b)
          {
               if (s[i] == t[j])
               {
                    i++;
                    j++;
               }
               else
                    j++;
          }
          return i == a;
     }
};
// leetcod - 392