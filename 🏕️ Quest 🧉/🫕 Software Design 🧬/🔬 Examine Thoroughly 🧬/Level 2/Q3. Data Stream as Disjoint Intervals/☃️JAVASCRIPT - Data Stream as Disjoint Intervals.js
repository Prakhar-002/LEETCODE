//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L2 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class SummaryRanges {
      constructor() {
            // Use a Set to store all added numbers
            // We will sort them when building intervals
            this.numbers = new Set();
      }

      addNum(value) {
            // Add the number to the Set
            // This ensures we have all unique numbers
            this.numbers.add(value);
      }

      getIntervals() {
            // List to store the resulting intervals [start, end]
            const res = [];

            // Convert Set to sorted array
            const sortedNumbers = Array.from(this.numbers).sort((a, b) => a - b);

            // Iterate over each number in sorted order
            for (const n of sortedNumbers) {
                  // If res is not empty and the current number is consecutive to the last interval
                  if (res.length > 0 && res[res.length - 1][1] + 1 === n) {
                        // Extend the last interval’s end to include this number
                        res[res.length - 1][1] = n;
                  } else {
                        // Otherwise, start a new interval [n, n]
                        res.push([n, n]);
                  }
            }

            // Return the list of merged intervals
            return res;
      }
}
