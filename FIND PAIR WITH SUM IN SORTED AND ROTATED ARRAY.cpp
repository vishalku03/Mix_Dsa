#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int Countpair(int arr[], int n, int sum)
     {

          int i = 0;
          int j = n - 1;
          int count = 0;

          while (i < j)
          {
               int r = arr[i] + arr[j];

               if (r == sum)
               {
                    count++;
                    i++;
                    j--;
               }

               else if (r > sum)
               {
                    j--;
               }
               else
               {
                    i++;
               }
               r = 0;
          }
          if (count < 1)
               return -1;
          return count;
     }
};

// GFG