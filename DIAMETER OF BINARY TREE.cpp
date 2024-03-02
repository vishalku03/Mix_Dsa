class Solution
{
public:
     int maxDepth(TreeNode *root)
     {
          if (root == NULL)
               return 0;

          int leftAns = maxDepth(root->left);
          int rightAns = maxDepth(root->right);

          return max(leftAns, rightAns) + 1;
     }

     int diameterOfBinaryTree(TreeNode *root)
     {
          if (root == NULL)
               return 0;

          int opt1 = diameterOfBinaryTree(root->left);
          int opt2 = diameterOfBinaryTree(root->right);
          int opt3 = maxDepth(root->left) + maxDepth(root->right);

          return max(opt1, max(opt2, opt3));
     }
};

// LEETCODE PROBLEM = 543