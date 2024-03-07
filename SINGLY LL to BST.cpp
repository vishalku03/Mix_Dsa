class Solution
{
public:
     ListNode *middleNode(ListNode *start, ListNode *end)
     { // isse ham LL ka mid pata kar lenge
          ListNode *slow = start, *fast = start;
          while (fast != end && fast->next != end)
          {
               slow = slow->next;
               fast = fast->next->next;
          }
          return slow; // yah hame mid pata karke de dega
     }
     TreeNode *solve(ListNode *start, ListNode *end)
     {
          if (start == end)
               return NULL;
          ListNode *mid = middleNode(start, end);
          TreeNode *node = new TreeNode(mid->val);
          node->left = solve(start, mid);
          node->right = solve(mid->next, end);
          return node;
     }
     TreeNode *sortedListToBST(ListNode *head)
     {
          return solve(head, NULL);
     }
};

// LLETCODE PROBLEM =109