//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1462

//? ⌚ Time complexity ➺ O(V+E+Q) 

//* 👉🏻  V is the number of courses.
//* 👉🏻 E is the number of prerequisites.
//* 👉🏻 Q is the number of queries.

//? 🧺 Space complexity ➺ O(V^2 + E)

#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
      vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
            // Adjacency list to represent prerequisites for each course
            unordered_map<int, vector<int>> adj;

            // Build the adjacency list from prerequisites
            for (auto& pair : prerequisites) {
                  adj[pair[1]].push_back(pair[0]);
            }

            // Map to store the set of prerequisites for each course
            unordered_map<int, unordered_set<int>> preReqMap;

            // Compute prerequisite sets for all courses
            for (int i = 0; i < numCourses; i++) {
                  dfs(i, adj, preReqMap);
            }

            // Answer vector to store the results for each query
            vector<bool> answer;
            for (auto& query : queries) {
                  answer.push_back(preReqMap[query[1]].count(query[0]) > 0);
            }

            return answer;
      }

private:
      unordered_set<int> dfs(int course, unordered_map<int, vector<int>>& adj, unordered_map<int, unordered_set<int>>& preReqMap) {
            // If prerequisites for this course are already calculated
            if (preReqMap.count(course)) {
                  return preReqMap[course];
            }

            // Initialize an empty set for the current course
            unordered_set<int> prerequisitesSet;

            // Recursively calculate prerequisites from the adjacency list
            for (int preReq : adj[course]) {
                  auto tempSet = dfs(preReq, adj, preReqMap);
                  prerequisitesSet.insert(tempSet.begin(), tempSet.end());
            }

            // Add the course itself to its prerequisite set
            prerequisitesSet.insert(course);

            // Store the calculated prerequisites in the map
            preReqMap[course] = prerequisitesSet;

            return prerequisitesSet;
      }
};
