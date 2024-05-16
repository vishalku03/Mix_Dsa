class Solution
{
public:
     ListNode *solve(ListNode *head)
     {
          // base case
          if (head == NULL || head->next == NULL)
          {
               return head;
          }

          // ek case solve kardo
          ListNode *prev = NULL;
          ListNode *curr = head;
          ListNode *forward = curr->next;

          int count = 0;
          while (count < 2)
          {
               forward = curr->next;
               curr->next = prev;
               prev = curr;
               curr = forward;
               count++;
          }

          if (forward != NULL)
          {
               ListNode *recKaAns = solve(forward);
               head->next = recKaAns;
          }

          return prev;
     }

     ListNode *swapPairs(ListNode *head)
     {
          return solve(head);
     }
};
// lc- 25