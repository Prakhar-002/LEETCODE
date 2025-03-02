//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2363

// ? ⌚ Time complexity ➺ O(n + m + k log k) 👉🏻  n = len(items1) m = len(items2)

// ? 🧺 Space complexity ➺ O(n + m)          👉🏻    k = No.of unique value

class Solution {
public:
      vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
            // Map to store weight sums for each value (automatically sorted by key)
            map<int, int> val_to_wei;

            // Process the first list and add weights to corresponding values
            for (auto& item : items1) {
                  val_to_wei[item[0]] += item[1];
            }

            // Process the second list and add weights to corresponding values
            for (auto& item : items2) {
                  val_to_wei[item[0]] += item[1];
            }

            // This will hold the final result list
            vector<vector<int>> ret;

            // Iterate through the map (sorted order) and add [value, total_weight] to result
            for (auto& pair : val_to_wei) {
                  ret.push_back({pair.first, pair.second});
            }

            // Return the merged and sorted list of items
            return ret;
      }
};
