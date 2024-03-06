class Solution
{
public:
     void check(TreeNode *root, vector<int> &ans)
     {
          if (root == NULL)
               return;
          ans.push_back(root->val);

          check(root->left, ans);
          check(root->right, ans);
     }
     vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
     {
          vector<int> ans;

          check(root1, ans);
          check(root2, ans);
          sort(ans.begin(), ans.end());
          return ans;
     }
};
// LEETCODE PROBLEM -  1305