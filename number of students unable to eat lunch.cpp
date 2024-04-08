class Solution
{
public:
     int countStudents(vector<int> &students, vector<int> &sandwiches)
     {
          int n = students.size();

          int arr[2] = {0};

          // arr[0] =  count of students liking 0 sandwich
          // arr[1] = count of students ling 1 sandwitch

          for (int &ans : students)
          {
               arr[ans]++;
          }

          for (int i = 0; i < n; i++)
          {
               int sand = sandwiches[i];

               if (arr[sand] == 0) // iska matlab ab yaha se aage koi nhi kha sakta hai
               {
                    return n - i; // uske  bad vale sare nhi kha payenge aur bad vala sab ans hoga
               }

               else
               {
                    arr[sand]--;
               }
          }

          return 0;
     }
};

// leetcode - 1700