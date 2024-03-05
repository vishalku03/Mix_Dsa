
class Solution
{
public:
     int check(TreeNode *root, int curr)
     {

          if (root == NULL)
               return 0;
          curr = curr * 2 + root->val;

          if (root->left == NULL && root->right == NULL)
               return curr;

          int left = check(root->left, curr);
          int right = check(root->right, curr);

          return left + right;
     }
     int sumRootToLeaf(TreeNode *root)
     {

          if (root == NULL)
               return 0;

          return check(root, 0);
     }
};

// LEETCODE PROBLEM - 1022