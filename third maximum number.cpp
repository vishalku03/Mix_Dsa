class Solution
{
public:
     int thirdMax(vector<int> &nums)
     {
          long long first = LLONG_MIN;
          long long second = LLONG_MIN;
          long long third = LLONG_MIN;

          for (int num : nums)
          {
               if (num == first || num == second || num == third)
               {
                    continue; // Skip duplicates
               }
               if (num > first)
               {
                    third = second;
                    second = first;
                    first = num;
               }
               else if (num > second)
               {
                    third = second;
                    second = num;
               }
               else if (num > third)
               {
                    third = num;
               }
          }

          return (third != LLONG_MIN) ? third : first;
     }
};
//leetcode - 414