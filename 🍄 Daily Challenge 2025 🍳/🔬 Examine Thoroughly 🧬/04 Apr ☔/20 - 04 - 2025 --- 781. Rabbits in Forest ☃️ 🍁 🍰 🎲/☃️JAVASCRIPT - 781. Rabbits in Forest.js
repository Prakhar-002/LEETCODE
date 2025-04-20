//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 781

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(answers)

//? 🧺 Space complexity ➺ O(n)

var numRabbits = function (answers) {
      // Object to count frequency of each answer
      const countMap = {};

      // Count how many times each answer appears
      for (const ans of answers) {
            countMap[ans] = (countMap[ans] || 0) + 1;
      }

      let totalRabbits = 0;  // Final rabbit count

      // Loop through each entry in the countMap
      for (const ans in countMap) {
            const answer = parseInt(ans);       // Convert key to integer
            const freq = countMap[ans];         // Number of rabbits giving this answer

            const groupSize = answer + 1;       // Group size = answer + 1
            let numGroups = Math.floor(freq / groupSize);

            if (freq % groupSize !== 0) {
                  numGroups += 1;               // Add one more group if some are left
            }

            totalRabbits += numGroups * groupSize; // Add rabbits from all groups
      }

      // Return the minimum number of rabbits
      return totalRabbits;
};
