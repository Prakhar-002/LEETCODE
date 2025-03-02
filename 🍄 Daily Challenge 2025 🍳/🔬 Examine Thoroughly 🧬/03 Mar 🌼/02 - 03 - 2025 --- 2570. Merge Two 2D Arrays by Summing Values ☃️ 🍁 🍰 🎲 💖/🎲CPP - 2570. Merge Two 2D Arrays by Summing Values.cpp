//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2570

// ? ⌚ Time complexity ➺ O(n + m + k log k) 👉🏻  n = len(nums1) m = len(nums2)

// ? 🧺 Space complexity ➺ O(n + m)          👉🏻 k = No.of unique Ids

#include <vector>
#include <map>
using namespace std;

class Solution {
public:
      vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            // Map to store the sum of values for each unique ID
            map<int, int> idToSum;

            // Process first array and add values to the corresponding IDs
            for (auto& pair : nums1) {
                  int id = pair[0], value = pair[1];
                  idToSum[id] += value;
            }

            // Process second array and add values to the corresponding IDs
            for (auto& pair : nums2) {
                  int id = pair[0], value = pair[1];
                  idToSum[id] += value;
            }

            // Create result vector to store merged arrays
            vector<vector<int>> mergedArray;

            // Prepare the final merged result (map is already sorted by keys in C++)
            for (auto& entry : idToSum) {
                  mergedArray.push_back({entry.first, entry.second});
            }

            // Return the merged array
            return mergedArray;
      }
};


//!----------------------------------------------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n + m)   👉🏻  n = len(nums1) 

// ? 🧺 Space complexity ➺ O(n + m)  👉🏻 m = len(nums2)

#include <vector>
using namespace std;

class Solution {
public:
      vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            // Lengths of both arrays
            int n = nums1.size(), m = nums2.size();

            // Pointers for both arrays
            int i = 0, j = 0;

            // Result vector to store merged arrays
            vector<vector<int>> mergedArray;

            // Merge process using two-pointer technique
            while (i < n && j < m) {
                  if (nums1[i][0] == nums2[j][0]) {
                        // Same ID - add sum of values
                        mergedArray.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                        i++;
                        j++;
                  } else if (nums1[i][0] < nums2[j][0]) {
                        // nums1 ID is smaller - add nums1 directly
                        mergedArray.push_back(nums1[i]);
                        i++;
                  } else {
                        // nums2 ID is smaller - add nums2 directly
                        mergedArray.push_back(nums2[j]);
                        j++;
                  }
            }

            // Add remaining elements from nums1
            while (i < n) {
                  mergedArray.push_back(nums1[i]);
                  i++;
            }

            // Add remaining elements from nums2
            while (j < m) {
                  mergedArray.push_back(nums2[j]);
                  j++;
            }

            return mergedArray;
      }
};
