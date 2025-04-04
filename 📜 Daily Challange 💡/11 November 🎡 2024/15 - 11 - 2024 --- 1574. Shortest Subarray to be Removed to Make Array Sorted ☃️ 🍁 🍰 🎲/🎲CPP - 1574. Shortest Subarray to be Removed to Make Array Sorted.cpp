//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1574

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int findLengthOfShortestSubarray(vector<int>& arr) {
            int n = arr.size();

            // Step 1: Find the longest non-decreasing prefix
            int left = 0;
            while (left + 1 < n && arr[left] <= arr[left + 1]) {
                  left++;
            }

            // If the entire array is already sorted, no removal is needed
            if (left == n - 1)
                  return 0;

            // Step 2: Find the longest non-decreasing suffix
            int right = n - 1;
            while (right > 0 && arr[right - 1] <= arr[right]) {
                  right--;
            }

            // Step 3: Calculate the minimum length to remove by comparing prefix and suffix
            // Removing everything after the prefix: n - left - 1
            // Removing everything before the suffix: right
            int result = min(n - left - 1, right);

            // Step 4: Use two pointers to find the smallest middle part to remove
            int i = 0, j = right;
            while (i <= left && j < n) {
                  if (arr[i] <= arr[j]) {
                        // If arr[i] can be merged with arr[j], update the result
                        result = min(result, j - i - 1);
                        i++; // Move to the next element in the prefix
                  } else {
                        j++; // Move to the next element in the suffix
                  }
            }

            // Return the final result: the minimum length of the subarray to remove
            return result;
      }
};
