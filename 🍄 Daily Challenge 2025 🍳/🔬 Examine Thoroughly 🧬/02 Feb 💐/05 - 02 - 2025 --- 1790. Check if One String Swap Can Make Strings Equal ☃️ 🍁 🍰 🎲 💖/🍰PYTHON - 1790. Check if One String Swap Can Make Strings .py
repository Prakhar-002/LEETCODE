#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1790

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s1 + s2)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def areAlmostEqual(self, s1: str, s2: str) -> bool:
            # If lengths differ, swapping won't make them equal
            if len(s1) != len(s2):
                  return False

            first = -1  # Index of first mismatch
            sec = -1    # Index of second mismatch
            diff_count = 0  # Count of differing characters

            for i in range(len(s1)):
                  if s1[i] != s2[i]:  
                        diff_count += 1

                        if diff_count == 1:
                              first = i  # Store first mismatch
                        elif diff_count == 2:
                              sec = i  # Store second mismatch
                        else:
                              return False  # More than 2 mismatches → can't swap to match

            # If no difference, they are already equal
            # If exactly two differences, check if swapping makes them equal
            return diff_count == 0 or (diff_count == 2 and s1[first] == s2[sec] and s1[sec] == s2[first])
