class Solution
{
public:
     string minWindow(string s, string t)
     {
          int n = s.length();
          if (t.length() > n)
               return "";
          string ans;

          unordered_map<char, int> charCount;
          for (char &c : t)
          {
               charCount[c]++;
          }

          int requiredCount = t.length();
          int i = 0, j = 0;

          int minWindowSize = INT_MAX;
          int startInd = 0;

          while (j < n)
          {
               char ch = s[j];
               if (charCount[ch] > 0)
               {
                    requiredCount--;
               }
               // always reduce map frequency
               charCount[ch]--;

               while (requiredCount == 0)
               {
                    // start shrinking the window
                    int currWindowSize = j - i + 1;

                    if (minWindowSize > currWindowSize)
                    {
                         minWindowSize = currWindowSize;
                         startInd = i;
                    }
                    charCount[s[i]]++;

                    if (charCount[s[i]] > 0)
                    {
                         requiredCount++;
                    }

                    i++;
               }

               j++;
          }

          return minWindowSize == INT_MAX ? "" : s.substr(startInd, minWindowSize);
     }
};
// leetcode  -  76