/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
     TreeNode *addOneRow(TreeNode *root, int val, int depth, bool left = true)
     {
          if (depth <= 1)
          { // f depth == 1 that means there is no depth depth - 1 at all
               TreeNode *temp = new TreeNode(val);

               if (left)
                    temp->left = root;

               else
                    temp->right = root;

               return temp;
          }
          if (root == NULL)
               return root;
          root->left = addOneRow(root->left, val, depth - 1, true);
          root->right = addOneRow(root->right, val, depth - 1, false);

          return root;
     }
};

// leetcode  - 623