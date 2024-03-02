class Solution
{
public:
     TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
     {
          if (root == NULL)
               return NULL;

          if (root->val == p->val || root->val == q->val)
               return root;

          TreeNode *leftAns = lowestCommonAncestor(root->left, p, q);
          TreeNode *rightAns = lowestCommonAncestor(root->right, p, q);

          if (leftAns != NULL && rightAns != NULL)
               return root;
          if (leftAns != NULL)
               return leftAns;
          else
               return rightAns;
     }
};

// LEETCODE PROBLEM -  236