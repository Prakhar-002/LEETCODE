#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 916

#? ⌚ Time complexity ➺ O(m * p + n * q) 

#*   👉🏻  n = len(word1) p = avg(len(word in word1))
#*   👉🏻  m = len(word2) q = avg(len(word in word2))

#? 🧺 Space complexity ➺ O(1)   

class Solution(object):
      # Method to count the frequency of each letter in a word.
      # The result is a list of size 26, where each index corresponds
      # to the count of letters 'a' to 'z'.
      def wordsLetterCount(self, word):
            letters = [0] * 26  # Initialize a list of size 26 with zeros.
            for letter in word:
                  # Calculate the index by subtracting the ASCII value of 'a'
                  # from the current letter, then increment the count at that index.
                  letters[ord(letter) - ord('a')] += 1
            return letters

      # Method to find all universal words in word1 that satisfy the conditions
      # of being a superset for each word in word2.
      def wordSubsets(self, word1, word2):
            word2MaxCnt = [0] * 26  # Initialize max frequency counts for word2.

            # For each word in word2, update the maximum letter counts required.
            for word in word2:
                  for i, count in enumerate(self.wordsLetterCount(word)):
                        # Update word2MaxCnt with the maximum frequency for each letter.
                        word2MaxCnt[i] = max(word2MaxCnt[i], count)

            universal = []  # Initialize the result list for universal words.

            # Check each word in word1 to see if it satisfies the conditions.
            for word in word1:
                  # If all letter counts in the word are greater than or equal
                  # to the corresponding counts in word2MaxCnt, add the word to the result.
                  if all(x >= y for x, y in zip(self.wordsLetterCount(word), word2MaxCnt)):
                        universal.append(word)

            return universal
