class Solution
{
public:
     vector<string> binaryTreePaths(TreeNode *root)
     {
          vector<string> result;
          check(root, "", result);
          return result;
     }

     void check(TreeNode *node, string path, vector<string> &result)
     {
          if (!node)
               return;
          path = path + to_string(node->val);
          if (!node->left && !node->right)
          {
               result.push_back(path);
          }
          else
          {
               check(node->left, path + "->", result);
               check(node->right, path + "->", result);
          }
     }
};
// LEETCODE PROBLRM -  257