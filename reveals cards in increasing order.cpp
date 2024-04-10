class Solution
{
public:
     vector<int> deckRevealedIncreasing(vector<int> &deck)
     {

          int n = deck.size();
          vector<int> ans(n, 0);
          bool skip = false;
          int i = 0; // deck
          int j = 0; // ans
          sort(begin(deck), end(deck));

          while (i < n)
          {
               if (ans[j] == 0) // khali hai ;
               {
                    if (skip == false)
                    {
                         ans[j] = deck[i];
                         i++;
                    }

                    skip = !skip; // alternative
               }

               j = (j + 1) % n;
          }
          return ans;
     }
};

// leetcode - 950