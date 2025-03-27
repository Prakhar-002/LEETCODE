//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2780

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
      int minimumIndex(vector<int>& nums) {
            int n = nums.size();
            int majority = 0; // Stores the dominant element
            int count = 0;    // Count variable for Boyer-Moore Algorithm

            // Step 1: Find the dominant element using Boyer-Moore Voting Algorithm
            for (int num : nums) {
                  if (count == 0) {
                        majority = num; // Set current element as the dominant candidate
                  }
                  if (num == majority) {
                        count++;  // Increment count if same as current dominant
                  } else {
                        count--;  // Decrement count if different
                  }
            }

            // Step 2: Count occurrences of the dominant element
            int leftCnt = 0;
            int rightCnt = count_if(nums.begin(), nums.end(), [&](int x) { return x == majority; });

            // Step 3: Iterate to find the minimum valid index
            for (int i = 0; i < n; i++) {
                  if (nums[i] == majority) {
                        leftCnt++;  // Move `nums[i]` from right partition to left partition
                        rightCnt--;
                  }

                  // Compute partition sizes
                  int leftLen = i + 1;
                  int rightLen = n - i - 1;

                  // Check if `majority` is dominant in both partitions
                  if (2 * leftCnt > leftLen && 2 * rightCnt > rightLen) {
                        return i; // Return the first valid index
                  }
            }

            return -1; // Return -1 if no valid index is found
      }
};


//!--------------------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
      int minimumIndex(vector<int>& nums) {
            unordered_map<int, int> left;  // Stores frequency of elements in the left partition
            unordered_map<int, int> right; // Stores frequency of elements in the right partition

            // Populate the right frequency map initially
            for (int num : nums) {
                  right[num]++;
            }

            // Iterate through the array to find the valid index
            for (int i = 0; i < nums.size(); i++) {
                  int n = nums[i]; // Current element

                  // Move current element `n` from right partition to left partition
                  left[n]++;
                  right[n]--;

                  // If `n` count in right partition becomes zero, remove it
                  if (right[n] == 0) {
                        right.erase(n);
                  }

                  // Compute partition sizes
                  int left_len = i + 1;               // Length of left partition
                  int right_len = nums.size() - i - 1; // Length of right partition

                  // Check if `n` is dominant in both partitions
                  if (2 * left[n] > left_len && right.count(n) && 2 * right[n] > right_len) {
                        return i; // Return the minimum valid index
                  }
            }

            return -1; // Return -1 if no valid index is found
      }
};

