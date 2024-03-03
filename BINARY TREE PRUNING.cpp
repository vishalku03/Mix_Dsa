
class Solution
{
public:
     bool oneIsPres(TreeNode *node)
     {
          if (node == NULL)
               return false;

          if (node->val == 1)
               return true;

          return oneIsPres(node->left) || oneIsPres(node->right);
     }
     TreeNode *pruneTree(TreeNode *root)
     {
          if (!root)
               return NULL;

          root->left = pruneTree(root->left);
          root->right = pruneTree(root->right);

          if (!root->left && !root->right && root->val == 0)
               return NULL;

          return root;
     }
};

// LEETCODE PRORBLEM - 814