TreeNode *ans = NULL;
class Codec
{
public:
     // Encodes a tree to a single string.
     string serialize(TreeNode *root)
     {

          ans = root;
          return "";
     }

     // Decodes your encoded data to tree.
     TreeNode *deserialize(string data)
     {
          return ans;
     }
};

// LEETCODE - 449