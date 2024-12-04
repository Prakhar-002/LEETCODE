#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1455

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of words

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
            # Split the sentence into words using the split() method
            words = sentence.split()

            # Initialize the 1-based index
            index = 1

            # Iterate through each word in the list of words
            for word in words:
                  # Check if the word starts with the searchWord
                  if word.startswith(searchWord):
                        return index  # Return the current index if it's a prefix

                  # Increment the index for the next word
                  index += 1

            # Return -1 if no word starts with the searchWord
            return -1
