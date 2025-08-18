//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 679

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(1)

var judgePoint24 = function (cards) {
      // ----------------------------------------------------------
      // Step 1: Initialization and Backtracking Setup
      // ----------------------------------------------------------
      // `EPS` (epsilon) for comparing floating-point numbers due to precision errors.
      const EPS = 1e-6;

      const backtrack = (nums) => {
            // ----------------------------------------------------------
            // Step 2: Base Case for Backtracking
            // ----------------------------------------------------------
            // If the array is reduced to a single number, check if it's approximately 24.
            if (nums.length === 1) {
                  return Math.abs(nums[0] - 24.0) < EPS;
            }

            // ----------------------------------------------------------
            // Step 3: Recursive Step - Explore All Operations
            // ----------------------------------------------------------
            const n = nums.length;
            // Iterate through every unique pair of numbers (a, b) from the array.
            for (let i = 0; i < n; i++) {
                  for (let j = i + 1; j < n; j++) {
                        // Create a new array `rest` with all numbers except for `a` and `b`.
                        const rest = nums.filter((_, k) => k !== i && k !== j);

                        const a = nums[i];
                        const b = nums[j];

                        // Generate all possible results from applying operations to `a` and `b`.
                        const candidates = [];
                        candidates.push(a + b);
                        candidates.push(a * b);
                        candidates.push(a - b);
                        candidates.push(b - a); // Subtraction is not commutative.

                        // For division, check for division by zero.
                        if (Math.abs(b) > EPS) candidates.push(a / b);
                        if (Math.abs(a) > EPS) candidates.push(b / a); // Division is not commutative.

                        // For each candidate result `x`, create a new list for the next recursive call.
                        for (const x of candidates) {
                              // Using spread syntax `...` is a clean way to create the new array.
                              if (backtrack([...rest, x])) {
                                    // If any recursive call finds a solution, propagate true up the call stack.
                                    return true;
                              }
                        } 
                  }
            }

            // If all pairs and operations have been tried from this state, return false.
            return false;
      };

      // ----------------------------------------------------------
      // Step 4: Initial Call and Return
      // ----------------------------------------------------------
      // Start the backtracking process by converting the initial integer cards to floats.
      const floatCards = cards.map(card => parseFloat(card));
      return backtrack(floatCards);
};
