#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 443

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(chars)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def compress(self, chars: List[str]) -> int:

            n = len(chars)
            i = 0  # Position to read characters
            j = 0  # Position to write the compressed result

            while i < n:
                  char = chars[i]
                  count = 0
                  # Count the occurrences of the current character
                  while i < n and chars[i] == char:
                        i += 1
                        count += 1

                  # Write the character to the result
                  chars[j] = char
                  j += 1

                  # If count > 1, write the count as digits
                  if count > 1:
                        for digit in str(count):
                              chars[j] = digit
                              j += 1

            # The final length of the compressed array
            return j
