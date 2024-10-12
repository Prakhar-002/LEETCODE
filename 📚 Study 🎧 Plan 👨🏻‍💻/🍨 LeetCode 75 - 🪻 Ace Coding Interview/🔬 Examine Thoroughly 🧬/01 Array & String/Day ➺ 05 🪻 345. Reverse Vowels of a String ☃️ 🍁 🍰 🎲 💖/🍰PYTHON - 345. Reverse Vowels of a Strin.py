#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 345

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def reverseVowels(self, s: str) -> str:
            # Set of vowels for easy lookup
            vowels = set("aeiouAEIOU")

            # Convert the string to a list of characters
            # This allows us to modify the characters directly
            s = list(s)

            # Initialize two pointers
            left, right = 0, len(s) - 1

            # Use two pointers to find and swap vowels
            while left < right:
                  # Move left pointer to the right until a vowel is found
                  while left < right and s[left] not in vowels:
                        left += 1

                  # Move right pointer to the left until a vowel is found
                  while left < right and s[right] not in vowels:
                        right -= 1

                  # If both pointers are at vowels, swap them
                  if left < right:
                        s[left], s[right] = s[right], s[left]

                        # Move the pointers inward to continue checking
                        left += 1
                        right -= 1

            # Convert the list back to a string and return
            return ''.join(s)

