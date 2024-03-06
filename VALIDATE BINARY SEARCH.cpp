
class Solution
{
public:
     bool solve(TreeNode *root, long long min, long long max)
     {
          if (!root)
               return true;

          bool cond1 = (root->val > min && root->val < max);
          bool cond2 = (solve(root->left, min, root->val) && solve(root->right, root->val, max));

          return (cond1 && cond2);
     }
     bool isValidBST(TreeNode *root)
     {

          long long int min = -1000000000000, max = 1000000000000;

          return solve(root, min, max);
     }
};

// LEETCODE PROBLEM -  98