#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1456

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxVowels(self, s: str, k: int) -> int:
            # Initialize the left pointer for the sliding window
            l = 0

            # Define the set of vowels for quick lookup
            vowels = {'a', 'e', 'i', 'o', 'u'}

            # Variable to keep track of the current count of vowels in the window
            cur_vowels = 0

            # Variable to store the maximum number of vowels found
            max_vowels = 0

            # Iterate through the string with the right pointer
            for r in range(len(s)):
                  # Increment the count if the current character is a vowel
                  cur_vowels += 1 if s[r] in vowels else 0

                  # If the window size exceeds k, adjust by removing the leftmost character
                  if (r - l + 1) > k:
                        cur_vowels -= 1 if s[l] in vowels else 0
                        l += 1  # Move the left pointer to the right

                  # Update the maximum vowels count if the current count is greater
                  max_vowels = max(cur_vowels, max_vowels)

            # Return the maximum number of vowels found
            return max_vowels
