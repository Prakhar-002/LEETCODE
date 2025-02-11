//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1910

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n + m) 👉🏻  m = len(part)

var removeOccurrences = function (s, part) {
      // Get the length of the substring to be removed
      let partLen = part.length;

      // Use an array as a stack
      let stack = [];

      // Iterate through each character in the string
      for (let ch of s) {
            stack.push(ch);  // Push character to stack

            // Check if the last 'partLen' characters form the substring 'part'
            if (stack.length >= partLen && checkMatch(stack, part, partLen)) {
                  // Remove 'partLen' characters if a match is found
                  stack.length -= partLen;
            }
      }

      // Convert the stack back to a string and return
      return stack.join('');
}

var checkMatch = function (stack, part, partLen) {
      // Check if the last 'partLen' characters match 'part'
      return stack.slice(-partLen).join('') === part;
}
