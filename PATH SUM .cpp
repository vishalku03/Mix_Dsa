class Solution
{
public:
     bool solve(TreeNode *root, int targetSum, int sum)
     {
          if (root == NULL)
               return false;

          sum = sum + root->val;
          if (root->left == NULL && root->right == NULL)
          {
               if (targetSum == sum)
                    return true;
               else
                    return false;
          }
          bool leftAns = solve(root->left, targetSum, sum);
          bool rightAns = solve(root->right, targetSum, sum);
          return leftAns || rightAns;
     }
     bool hasPathSum(TreeNode *root, int targetSum)
     {

          int sum = 0;
          return solve(root, targetSum, sum);
     }
};

// LEETCODE PROBLEM -  112