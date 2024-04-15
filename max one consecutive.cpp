class Solution
{
public:
     int findMaxConsecutiveOnes(vector<int> &nums)
     {
          int n = nums.size();
          int max_one = INT_MIN;
          int count = 0;

          for (int i = 0; i < n; i++)
          {
               if (nums[i] == 1)
               {
                    count++;
                    max_one = max(max_one, count);
               }
               else
               {
                    count = 0;
               }
          }
          if (max_one == INT_MIN)
               return 0;

          return max_one;
     }
};

/*  SUMMARY OF THE CODE;

  maximum onew nikalne ke liye ham ek count lenge
   2. max_one o initialise karenge
   3. loop ka use karenge aur count karenge 1 ko
   4. ham max_count aur count me se max one ko ham lenge
   5. nhi to ham 0  ko intialise kar denge count kar denge.

   6. aur last me ham max_count ko return kar denge;

*/


// leetcode - 485