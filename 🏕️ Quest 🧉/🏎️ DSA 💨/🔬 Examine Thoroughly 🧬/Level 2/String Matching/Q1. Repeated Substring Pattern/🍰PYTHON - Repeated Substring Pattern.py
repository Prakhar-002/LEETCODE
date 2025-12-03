#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q1

#? ⌚ Time complexity ➺ O(n * sqrt(n)) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def repeatedSubstringPattern(self, s: str) -> bool:
            n = len(s)                       # Total length of the string

            # Try all possible substring lengths from n//2 down to 1
            # A repeating substring cannot be longer than n/2
            for i in range(n // 2, 0, -1):
                  # Only consider lengths that divide n evenly
                  if n % i == 0:
                        times = n // i       # How many times the substring would need to repeat
                        pattern = s[0:i]     # Candidate substring from the start

                        # Repeat the candidate substring 'times' times and compare
                        if pattern * times == s:
                              return True    # Found a repeating pattern

            # No valid repeating substring found
            return False
