
class Solution
{
public:
     string result = "";
     void dfs(TreeNode *root, string curr)
     {
          if (!root)
               return; // iska matlav root null hai .

          curr = char(root->val + 'a') + curr; // 'a' add karne ka matlav hai ham isse character me badal diye hai

          if (!root->left && !root->right)
          {
               if (result == "" || result > curr)
               {
                    result = curr;
               }
               return;
          }

          else
          {
               dfs(root->left, curr);
               dfs(root->right, curr);
          }
     }

     string smallestFromLeaf(TreeNode *root)
     {
          dfs(root, "");
          return result;
     }
};

// using dfs;;
// ham bfs se bhi bna skate hai;

// leetcode  -  988