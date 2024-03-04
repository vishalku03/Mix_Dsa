class Solution
{
public:
     int bagOfTokensScore(vector<int> &tokens, int power)
     {

          int n = tokens.size();
          int maX_score = 0;
          int score = 0;
          sort(begin(tokens), end(tokens));

          int i = 0;
          int j = n - 1;

          while (i <= j)
          {
               if (power >= tokens[i])
               {
                    power = power - tokens[i];
                    i++;
                    score++;
                    maX_score = max(score, maX_score);
               }
               else if (score >= 1)
               {
                    power = power + tokens[j];
                    j--;
                    score--;
               }
               else
                    return maX_score;
          }

          return maX_score;
     }
};

// LEETCODE PROBLEM -  948