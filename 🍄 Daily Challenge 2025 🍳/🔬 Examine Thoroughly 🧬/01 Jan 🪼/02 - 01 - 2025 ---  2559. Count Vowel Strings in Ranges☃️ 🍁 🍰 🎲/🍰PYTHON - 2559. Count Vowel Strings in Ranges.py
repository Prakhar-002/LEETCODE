#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2559

#? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(words)

#? 🧺 Space complexity ➺ O(n)    👉🏻  q = len(queries) 

class Solution:
      def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
            # Define the set of vowels for easy lookup
            vowels = "aeiou"

            # Initialize a prefix sum array where each index stores the cumulative count
            # of "vowel strings" (strings that start and end with a vowel)
            vowels_words = [0] * (len(words) + 1)

            # Initialize the index for iterating through the words
            i = 1

            # Calculate the prefix sum for vowel strings
            for word in words:
                  # Check if the current word starts and ends with a vowel
                  if word[0] in vowels and word[-1] in vowels:
                        # Increment the count of vowel strings at index `i`
                        vowels_words[i] = vowels_words[i - 1] + 1
                  else:
                        # Carry forward the previous count
                        vowels_words[i] = vowels_words[i - 1]

                  # Move to the next index
                  i += 1

            # Initialize the result array for storing the answers to each query
            ans = [0] * len(queries)

            # Reset the index for iterating through queries
            i = 0

            # Process each query to calculate the number of vowel strings in the range
            for st, end in queries:
                  # Calculate the number of vowel strings in the range [st, end]
                  # using the difference of prefix sums
                  ans[i] = vowels_words[end + 1] - vowels_words[st]
                  i += 1

            # Return the results for all queries
            return ans
