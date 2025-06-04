//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3403

//? ⌚ Time complexity ➺ 	O(n × (n - numFriends + 1)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺  O(n - numFriends + 1)

var answerString = function (word, numFriends) {
      // If there's only 1 friend, return the whole word
      if (numFriends === 1) {
            return word;
      }

      // Get the total length of the input string
      const n = word.length;

      // Store the lexicographically largest substring
      let res = "";

      // Compute the allowed substring length
      const length = n - numFriends + 1;

      // Loop over each character index as start
      for (let i = 0; i < n; i++) {
            // Calculate the end index with bounds check
            const end = Math.min(i + length, n);

            // Extract substring from i to end
            const temp = word.substring(i, end);

            // Update result if current substring is greater or equal
            if (res <= temp) {
                  res = temp;
            }
      }

      // Return the best substring found
      return res;
};
