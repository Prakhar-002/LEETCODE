//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q2

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
      vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
            // Handle edge case: return empty result if either array is empty
            if (nums1.empty() || nums2.empty()) {
                  return {};
            }

            // Define tuple type T = (sum, index_i, index_j) for min-heap
            // priority_queue with greater<T> makes it a min-heap (smallest sum first)
            using T = tuple<int, int, int>;
            priority_queue<T, vector<T>, greater<T>> heap;
            
            // unordered_set stores visited pairs as strings "i,j" to prevent duplicates
            unordered_set<string> visited;

            // Initialize heap with smallest possible pair: nums1[0] + nums2[0]
            heap.push({nums1[0] + nums2[0], 0, 0});
            visited.insert("0,0");  // Mark starting pair as visited

            // Result vector to store k smallest pairs
            vector<vector<int>> result;

            // Continue until we have k pairs or heap is exhausted
            while (!heap.empty() && result.size() < k) {
                  // Extract pair with smallest sum: auto destructuring with C++17
                  auto [sum, i, j] = heap.top();
                  heap.pop();
                  
                  // Add current pair [nums1[i], nums2[j]] to result
                  result.push_back({nums1[i], nums2[j]});

                  // Expand right: try next element in nums2 (same i, j+1)
                  if (j + 1 < nums2.size()) {
                        string nextPair = to_string(i) + "," + to_string(j + 1);
                        // Only add if not previously visited
                        if (visited.find(nextPair) == visited.end()) {
                              visited.insert(nextPair);
                              // Push new candidate: nums1[i] + nums2[j+1]
                              heap.push({nums1[i] + nums2[j + 1], i, j + 1});
                        }
                  }

                  // Expand down: try next element in nums1 (i+1, same j)
                  if (i + 1 < nums1.size()) {
                        string nextPair = to_string(i + 1) + "," + to_string(j);
                        // Only add if not previously visited
                        if (visited.find(nextPair) == visited.end()) {
                              visited.insert(nextPair);
                              // Push new candidate: nums1[i+1] + nums2[j]
                              heap.push({nums1[i + 1] + nums2[j], i + 1, j});
                        }
                  }
            }

            return result;
      }
};
