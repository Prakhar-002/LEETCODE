//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2264

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(num)

//? 🧺 Space complexity ➺ O(1)

var largestGoodInteger = function (num) {
      // Variable to store the largest "good integer" substring found so far
      let res = "";

      // Iterate through string, checking triples of digits
      for (let i = 0; i < num.length - 2; i++) {
            // Check if three consecutive characters are the same
            if (num[i] === num[i + 1] && num[i] === num[i + 2]) {
                  // If res is empty OR current triple digit > recorded result
                  if (res === "" || num[i] > res[0]) {
                        // Store substring of 3 identical digits
                        res = num.substring(i, i + 3);
                  }
            }
      }

      // Return the largest good integer found (empty if none found)
      return res;
};
