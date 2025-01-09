#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2185

#? ⌚ Time complexity ➺ O(n * m) 👉🏻   n = No. of words

#? 🧺 Space complexity ➺ O(1) 👉🏻  m = len(prefix)   

class Solution:
      def prefixCount(self, words: List[str], prefix: str) -> int:
            # Initialize a counter to store the number of matching prefixes
            count = 0

            # Iterate through each word in the word list
            for word in words:
                  # Check if the current word starts with the given prefix
                  if word.startswith(prefix):
                        # Increment the counter if a match is found
                        count += 1

            # Return the final count of words matching the prefix
            return count
