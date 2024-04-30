class Solution
{
public:
     bool isHappy(int n)
     {
          //   base case
          if (n == 1)
          {
               return true;
          }
          else if (((n > 1 and n <= 6) or (n >= 8 and n <= 9)) or n == 0)
          {
               return false;
          }

          // case for one
          float sum = 0.0;

          while (n > 0)
          {
               int rem = n % 10;
               sum += pow(rem, 2);

               n = n / 10;
          }

          // recursive calling
          return isHappy((int)sum);
     }
};

// leetcode  -  202