class Solution
{
public:
     bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
     {
          // Create an adjacency list representation of the graph
          vector<vector<int>> graph(n);
          for (auto &edge : edges)
          {
               graph[edge[0]].push_back(edge[1]);
               graph[edge[1]].push_back(edge[0]);
          }

          // Initialize a queue for BFS traversal and a visited array
          queue<int> q;
          vector<int> visited(n, 0);
          visited[source] = 1;
          q.push(source);

          // Perform BFS traversal
          while (!q.empty())
          {
               int current = q.front();
               q.pop();
               if (current == destination)
                    return true; // Destination reached

               // Visit all neighbors of the current vertex
               for (int neighbor : graph[current])
               {
                    if (visited[neighbor] == 0)
                    {
                         visited[neighbor] = 1;
                         q.push(neighbor);
                    }
               }
          }

          return false; // Destination not reached, no valid path exists
     }
};
// leetcode - 1971