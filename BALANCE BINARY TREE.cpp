
class Solution
{
public:
     // height is the max of the left and right subtree + 1
     // balance factor is the height of the left subtree - the height of the right subtree
     bool isBalanced(TreeNode *root)
     {
          bool result = true;
          helper(root, result);

          return result;
     }

     int helper(TreeNode *root, bool &balanced)
     {

          if (root == nullptr || balanced == false)
          {
               return 0;
          }

          int left_height = helper(root->left, balanced);
          int right_height = helper(root->right, balanced);

          if (abs(left_height - right_height) > 1)
          {
               balanced = false;
          }

          return max(left_height, right_height) + 1;
     }
};
// LETCODE PROBLEM -  110