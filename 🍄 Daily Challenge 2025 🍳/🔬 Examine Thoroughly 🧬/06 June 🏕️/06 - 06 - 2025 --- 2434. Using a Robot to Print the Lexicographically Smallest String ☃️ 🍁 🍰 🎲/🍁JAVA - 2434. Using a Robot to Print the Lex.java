//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2434

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {

      public String robotWithString(String s) {

            // Step 1: Count frequency of each character in the string
            int[] cnt = new int[26];
            for (char c : s.toCharArray()) {
                  cnt[c - 'a']++; // Increment the count for character c
            }

            Stack<Character> stack = new Stack<>(); // Stack to simulate robot's holding area
            StringBuilder res = new StringBuilder(); // Result string (output)

            char minCharacter = 'a'; // Tracks the current smallest available character

            // Step 2: Process each character in the string
            for (char c : s.toCharArray()) {
                  stack.push(c); // Robot picks up the character
                  cnt[c - 'a']--; // Decrease the count since it's used

                  // Update minCharacter to the next smallest available character
                  while (minCharacter <= 'z' && cnt[minCharacter - 'a'] == 0) {
                        minCharacter++; // Skip characters no longer present
                  }

                  // While the top of the stack can be written (<= minCharacter), write it
                  while (!stack.isEmpty() && stack.peek() <= minCharacter) {
                        res.append(stack.pop()); // Robot writes the character
                  }
            }

            // Return the final result string
            return res.toString();
      }
}
