//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1207

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var uniqueOccurrences = function(arr) {
      // Count the frequency of each element using a Map
      let frequencyMap = new Map();
      for (let num of arr) {
            frequencyMap.set(num, (frequencyMap.get(num) || 0) + 1);
      }

      // Use a Set to store unique frequency values
      let frequencySet = new Set(frequencyMap.values());

      // Check if the size of the map values equals the size of the set
      return frequencyMap.size === frequencySet.size;
};
