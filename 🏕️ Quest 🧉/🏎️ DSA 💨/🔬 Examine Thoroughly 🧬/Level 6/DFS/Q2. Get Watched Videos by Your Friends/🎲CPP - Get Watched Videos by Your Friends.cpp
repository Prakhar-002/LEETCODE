//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos,
                                          vector<vector<int>>& friends,
                                          int id, int level) {
            int n = friends.size();  // Total people

            // Step 1: BFS setup
            queue<int> q;
            vector<bool> explored(n, false);
            
            q.push(id);  // Starting person
            explored[id] = true;

            // Step 2: Level-order BFS
            while (!q.empty() && level-- > 0) {
                  int size = q.size();  // Current level
                  for (int i = 0; i < size; i++) {
                        int idx = q.front(); q.pop();  // Current person
                        for (int f : friends[idx]) {  // Friends list
                              if (!explored[f]) {
                                    q.push(f);  // Next level
                                    explored[f] = true;
                              }
                        }
                  }
            }

            // Step 3: Count videos watched by level-target friends
            unordered_map<string, int> count;
            while (!q.empty()) {
                  int idx = q.front(); q.pop();
                  for (string video : watchedVideos[idx]) {
                        count[video]++;  // Frequency
                  }
            }

            // Step 4: Sort: frequency asc, then lex asc
            vector<string> watched;
            for (auto& p : count) {
                  watched.push_back(p.first);
            }

            sort(watched.begin(), watched.end(), [&](string& a, string& b) {
                  return count[a] == count[b] ? a < b : count[a] < count[b];
            });

            return watched;
      }
};
