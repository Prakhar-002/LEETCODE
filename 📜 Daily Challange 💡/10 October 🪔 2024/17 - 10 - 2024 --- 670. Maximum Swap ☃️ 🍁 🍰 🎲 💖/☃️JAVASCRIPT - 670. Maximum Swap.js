//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 670

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maximumSwap = function (num) {
      // Step 1: Extract digits into an array
      let digits = Array.from(String(num), Number);

      // Initialize variables to keep track of the maximum digit and swap positions
      let maxDigit = -1;
      let maxIdx = -1;
      let swapIdx = -1;
      let prevMaxIdx = -1;

      // Step 2: Traverse digits from right to left
      for (let i = digits.length - 1; i >= 0; i--) {
            // If the current digit is greater than the max_digit seen so far, 
            // update max_digit and max_idx
            if (digits[i] > maxDigit) {
                  maxDigit = digits[i];
                  maxIdx = i;
            }

            // If the current digit is smaller than the max_digit, 
            // store the indices for a potential swap
            if (digits[i] < maxDigit) {
                  [swapIdx, prevMaxIdx] = [i, maxIdx];
            }
      }

      // Step 3: Perform the swap if needed
      if (swapIdx !== -1) {
            // Swap the smaller digit with the largest digit that comes after it
            [digits[swapIdx], digits[prevMaxIdx]] = [digits[prevMaxIdx], digits[swapIdx]];
      }

      // Step 4: Reconstruct the number from the modified array of digits
      let result = parseInt(digits.join(''));

      // Return the result
      return result;
};