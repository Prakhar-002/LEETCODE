//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3392

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// C code to count subarrays where middle element is twice the average of neighbors
int countSubarrays(int* nums, int numsSize) {
      
      int ans = 0;     // Initialize the answer to 0

      // Loop through the array from the second element to the second-last element
      for (int i = 1; i < numsSize - 1; i++) {

            // Check if current element is twice the average of its adjacent elements
            if (nums[i] == (nums[i - 1] + nums[i + 1]) * 2) {

                  ans++;   // If yes, increment the answer
            }
      }

      return ans;    // Return the final count
}
