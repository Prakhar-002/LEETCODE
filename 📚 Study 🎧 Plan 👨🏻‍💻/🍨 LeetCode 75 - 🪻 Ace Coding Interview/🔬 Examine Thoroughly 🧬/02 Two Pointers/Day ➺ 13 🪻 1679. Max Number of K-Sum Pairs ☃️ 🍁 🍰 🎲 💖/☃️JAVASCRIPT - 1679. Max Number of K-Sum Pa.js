//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1679

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxOperations = function(nums, k) {
      // Sort the array to apply two-pointer technique
      nums.sort((a, b) => a - b);

      let l = 0, r = nums.length - 1;
      let pairs = 0;

      // Use two pointers to find pairs
      while (l < r) {
            // Check if the sum of the elements at the two pointers equals k
            if (nums[l] + nums[r] === k) {
                  pairs++;  // A valid pair is found, so increment the pair count
                  l++;  // Move the left pointer to the right
                  r--;  // Move the right pointer to the left
            } else if (nums[l] + nums[r] > k) {
                  r--;  // Move the right pointer to the left to decrease the sum
            } else {
                  l++;  // Move the left pointer to the right to increase the sum
            }
      }

      // Return the total number of pairs found
      return pairs;
};



//* 2nd Solution  

//!-----------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxOperations = function(nums, k) {
      // Initialize a map to store the frequency of numbers
      const count = new Map();
      let pairs = 0;

      // Iterate through each number in the array
      for (let num of nums) {
            // Calculate the complement that would sum up to k
            const complement = k - num;

            // If the complement exists in the map, form a pair
            if (count.get(complement) > 0) {
                  pairs++;
                  count.set(complement, count.get(complement) - 1); // Decrease the count of the complement
            } else {
                  // If no complement found, add the current number to the map
                  count.set(num, (count.get(num) || 0) + 1);
            }
      }

      // Return the total number of pairs found
      return pairs;
};
