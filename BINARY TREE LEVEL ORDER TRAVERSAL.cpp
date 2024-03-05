class Solution
{
public:
     vector<vector<int>> levelOrder(TreeNode *root)
     {
          vector<vector<int>> ans;
          if (root == NULL)
               return ans;

          queue<TreeNode *> que;
          que.push(root);

          while (!que.empty())
          {
               int levelSize = que.size();
               vector<int> levelNodes;

               for (int i = 0; i < levelSize; ++i)
               {
                    TreeNode *front = que.front();
                    que.pop();

                    levelNodes.push_back(front->val);

                    if (front->left != nullptr)
                         que.push(front->left);

                    if (front->right != nullptr)
                         que.push(front->right);
               }

               ans.push_back(levelNodes);
          }

          return ans;
     }
};

// LEETCODE PROBLEM - 102