class Solution
{
public:
     string reverseVowels(string s)
     {
          int n = s.size();
          stack<char> v;
          for (int i = 0; i < n; i++)
          {
               if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
               {
                    v.push(s[i]);
                    s[i] = '*';
               }
          }
          for (int i = 0; i < n; i++)
          {
               if (s[i] == '*')
               {
                    char c = v.top();
                    s[i] = c;
                    v.pop();
               }
          }
          return s;
     }
};
// leetcode   -  345