#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int search(vector<int> &arr, int target)
     {
          int s = 0;
          int n = arr.size();
          int e = n - 1;
          while (s <= e)
          {
               int mid = (s + e) / 2;
               if (arr[mid] == target)
               {
                    return mid;
               }
               else if (arr[s] <= arr[mid])
               {
                    if (arr[s] <= target && target <= arr[mid])
                    {
                         e = mid - 1;
                    }
                    else
                    {
                         s = mid + 1;
                    }
               }
               else
               {
                    if (arr[mid] <= target && target <= arr[e])
                    {
                         s = mid + 1;
                    }
                    else
                    {
                         e = mid - 1;
                    }
               }
          }
          return -1;
     }
};
// LEETCODE PROBLEM 33