#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1408

#? ⌚ Time complexity ➺ O(n^2 * m) 👉🏻  n = len(words)

#? 🧺 Space complexity ➺ O(n)      👉🏻  m = avg(len(word))

class Solution:
      def stringMatching(self, words: List[str]) -> List[str]:
            # Initialize a set to store substrings that match the criteria
            matching_words = set()

            # Iterate through each word in the list
            for word in words:
                  # Compare the current word with every other word in the list
                  for potential_string in words:
                        # Check if the potential substring is part of the current word
                        # and ensure it's not the same as the current word
                        if potential_string in word and potential_string != word:
                              matching_words.add(potential_string)

            # Convert the set to a list before returning
            return list(matching_words)
