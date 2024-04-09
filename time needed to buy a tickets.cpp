class Solution
{
public:
     int timeRequiredToBuy(vector<int> &tickets, int k)
     {
          int total = 0;
          int n = tickets.size();

          for (int i = 0; i < n; i++)
          {
               if (i <= k)
               {
                    total += min(tickets[i], tickets[k]);
               }
               else
               {
                    total += min(tickets[i], tickets[k] - 1);
               }
          }
          return total;
     }
};

// leetcode = 2073