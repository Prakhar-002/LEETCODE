//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.1 Q2

//? ⌚ Time complexity ➺ O(N × √M × α(M) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  -> M = max(nums), α = union func

#include <vector>
#include <unordered_map>
#include <ath>
using namespace std;

class Solution {
private:
      // Path compression with recursive find
      int find(int x, vector<int>& parent) {
            if (parent[x] == -1) {
                  return x;  // x is root
            }
            // Compress path to root
            parent[x] = find(parent[x], parent);
            return parent[x];
      }

      // Union by linking roots
      void union_sets(int x, int y, vector<int>& parent) {
            int xp = find(x, parent);
            int yp = find(y, parent);
            if (xp != yp) {
                  parent[yp] = xp;  // Link y's root to x's root
            }
      }

public:
      int largestComponentSize(vector<int>& nums) {
            int maxNum = 0;
            for (int num : nums) {
                  maxNum = max(maxNum, num);
            }
            
            // parent[i] = -1 if root, else parent[i] = parent node
            vector<int> parent(maxNum + 1, -1);

            // Connect numbers sharing common factors
            for (int num : nums) {
                  // Union with all factors of num
                  for (int k = 2; k * k <= num; k++) {
                        if (num % k == 0) {
                              union_sets(num, k, parent);
                              union_sets(num, num / k, parent);
                        }
                  }
            }

            // Count largest component size
            unordered_map<int, int> componentSize;
            int maxCount = 0;

            for (int num : nums) {
                  int root = find(num, parent);
                  componentSize[root]++;
                  maxCount = max(maxCount, componentSize[root]);
            }

            return maxCount;
      }
};
