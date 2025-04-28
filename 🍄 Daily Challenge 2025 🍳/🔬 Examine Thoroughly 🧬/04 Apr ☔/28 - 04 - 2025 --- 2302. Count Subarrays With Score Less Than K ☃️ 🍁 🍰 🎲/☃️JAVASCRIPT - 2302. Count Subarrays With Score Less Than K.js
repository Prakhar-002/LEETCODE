//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2302

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countSubarrays = function (nums, k) {
      let cntSubArr = 0, total = 0;    // Count of subarrays and total sum
      let n = nums.length;             // Length of array

      let left = 0;                    // Left pointer of window

      for (let right = 0; right < n; right++) {

            total += nums[right];       // Add current element to total

            // Shrink window if product condition fails
            while (left <= right && total * (right - left + 1) >= k) {
                  total -= nums[left];  // Remove element at left
                  left++;               // Move left pointer
            }

            cntSubArr += right - left + 1; // Add valid subarrays ending at 'right'
      }

      return cntSubArr;                 // Return the total count
};
