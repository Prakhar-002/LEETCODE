#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 869

#? ⌚ Time complexity ➺ O(d log d) 👉🏻  d = Digits in n

#? 🧺 Space complexity ➺ O(d)

class Solution:
      def reorderedPowerOf2(self, n: int) -> bool:
            # Helper function to count and order the digits of a number.
            # The function converts the number to a string, sorts the digits, 
            # and returns the joined string. This represents a canonical form 
            # for comparing digit counts regardless of order.
            def count_digits(x):
                  return ''.join(sorted(str(x)))

            # Calculate the sorted digits for the input number n
            target = count_digits(n)

            # For each power of 2 up to 2^30 (since 2^31 > 10^9)
            for i in range(31):
                  # Compare the sorted digits of this power of 2 with the target
                  if count_digits(1 << i) == target:
                        # If they match, n can be reordered to form this power of 2
                        return True
            # If no power of 2 matches, return False
            return False
