class Solution
{
public:
     vector<double> averageOfLevels(TreeNode *root)
     {
          vector<double> ans;
          queue<TreeNode *> que;
          que.push(root);

          while (!que.empty())
          {
               int size = que.size();
               double sum = 0;

               for (int i = 0; i < size; i++)
               {
                    TreeNode *front = que.front();
                    que.pop();
                    sum += front->val;

                    if (front->left)
                         que.push(front->left);
                    if (front->right)
                         que.push(front->right);
               }

               double avg = sum / size;
               ans.push_back(avg);
          }

          return ans;
     }
};
// LEETCODE PROBLEM  -  637