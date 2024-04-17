class Solution
{
public:
     vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
     {
          int n = nums2.size();
          stack<int> st;
          map<int, int> m;

          // Iterate through nums2 from right to left
          for (int i = n - 1; i >= 0; i--)
          {
               // Pop elements from the stack until it's empty or we find an element greater than the current element
               while (!st.empty() && st.top() < nums2[i])
                    st.pop();

               // Store the next greater element in the map
               if (!st.empty())
               {
                    m[nums2[i]] = st.top();
               }
               else
               {
                    m[nums2[i]] = -1;
               }

               // Push the current element into the stack
               st.push(nums2[i]);
          }

          // Create a vector to store the result
          vector<int> ans(nums1.size(), -1);

          // Iterate through nums1 to get the next greater element for each element
          for (int i = 0; i < nums1.size(); i++)
          {
               ans[i] = m[nums1[i]];
          }

          return ans;
     }
};
// leetcode -  496