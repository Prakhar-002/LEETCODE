//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1209

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var removeDuplicates = function (s, k) {
      // Stack stores pairs of [character, count]
      // Initialized with sentinel value '$' to avoid empty stack checks
      const stack = [['$', 0]];

      for (const ch of s) {
            // If current char matches top of stack, increment its count
            if (stack[stack.length - 1][0] === ch) {
                  stack[stack.length - 1][1]++;

                  // If count reaches k, remove the group entirely
                  if (stack[stack.length - 1][1] === k) {
                        stack.pop();
                  }
            }
            // Otherwise push new character with count 1
            else {
                  stack.push([ch, 1]);
            }
      }

      // Reconstruct string from remaining stack pairs
      return stack
            // Skip the sentinel '$' entry at the bottom
            .filter(([ch]) => ch !== '$')
            // Repeat each character by its count and join
            .map(([ch, count]) => ch.repeat(count))
            .join('');
};