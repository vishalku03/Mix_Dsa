class Solution
{
public:
     // 1. reverse k elements and  jump 2k elements
     string reverseStr(string s, int k)
     {

          for (int i = 0; i < s.size(); i += 2 * k)
          {
               reverse(s.begin() + i, min(s.begin() + i + k, s.end()));
          }
          return s;
     }
};
// leetocde - 541