
class Solution
{
public:
     int check(TreeNode *root, int ans)
     {
          if (!root)
               return false;

          ans = (ans * 10) + root->val;

          if (!root->left && !root->right)
               return ans;

          int l = check(root->left, ans);
          int r = check(root->right, ans);

          return l + r;
     }
     int sumNumbers(TreeNode *root)
     {

          return check(root, 0);
     }
};

// LEETCODE PROBLEM -  129