//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 334

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = nums.length

//? 🧺 Space complexity ➺ O(1)

function increasingTriplet(nums) {
      // Check if the array is empty or has fewer than 3 elements; no triplet is possible
      if (!nums || nums.length < 3) {
            return false;  // Return false if the condition is met
      }

      // Initialize 'a' to positive infinity (this will track the smallest number)
      let a = Infinity;
      // Initialize 'b' to positive infinity (this will track the second smallest number)
      let b = Infinity;

      // Iterate over each number in the array
      for (let num of nums) {
            // If the current number is smaller than or equal to 'a', update 'a'
            if (num <= a) {
                  a = num;
            }
            // Else if the current number is smaller than or equal to 'b', update 'b'
            else if (num <= b) {
                  b = num;
            }
            // If the current number is greater than both 'a' and 'b', return true (triplet found)
            else {
                  return true;
            }
      }

      // If the loop completes without finding an increasing triplet, return false
      return false;
}