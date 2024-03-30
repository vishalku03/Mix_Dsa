#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maxProfit(vector<int> &prices)
     {
          int profit = 0;
          int mini = INT_MAX;
          int max_profit = 0;
          for (int i = 0; i < prices.size(); i++)
          {
               if (mini > prices[i])
               {
                    mini = prices[i];
               }
               profit = prices[i] - mini;

               if (profit > max_profit)
               {
                    max_profit = profit;
               }
          }
          return max_profit;
     }
};


// LEETCODE PROBLEM - 121