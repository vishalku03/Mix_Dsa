
class Solution
{
public:
     TreeNode *insertInBST(TreeNode *root, int val)
     {
          if (root == NULL)
          {
               return new TreeNode(val);
          }
          if (val < root->val)
          {
               root->left = insertInBST(root->left, val);
          }
          else
               root->right = insertInBST(root->right, val);

          return root;
     }
     TreeNode *bstFromPreorder(vector<int> &preorder)
     {

          TreeNode *root = NULL;
          for (int i = 0; i < preorder.size(); i++)
          {
               root = insertInBST(root, preorder[i]);
          }
          return root;
     }
};

// LEETCODE PROBLME    = 1008