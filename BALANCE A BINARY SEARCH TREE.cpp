class Solution
{
public:
     TreeNode *helper(vector<int> &ans, int s, int e)
     {
          if (s > e)
               return NULL;

          int mid = s + (e - s) / 2;
          TreeNode *root = new TreeNode(ans[mid]);
          root->left = helper(ans, s, mid - 1);
          root->right = helper(ans, mid + 1, e);
          return root;
     }
     void inorder(TreeNode *root, vector<int> &ans)
     {
          if (root == NULL)
               return;
          inorder(root->left, ans);
          ans.push_back(root->val);

          inorder(root->right, ans);
     }
     TreeNode *balanceBST(TreeNode *root)
     {
          vector<int> ans;
          inorder(root, ans);
          return helper(ans, 0, ans.size() - 1);
     }
};
// LEETCODE PROBLEM - 1382