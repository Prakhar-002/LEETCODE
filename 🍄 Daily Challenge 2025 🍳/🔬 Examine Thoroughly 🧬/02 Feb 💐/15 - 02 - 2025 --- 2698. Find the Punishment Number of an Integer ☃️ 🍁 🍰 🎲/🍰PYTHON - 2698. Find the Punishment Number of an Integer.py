#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2698

#? ⌚ Time complexity ➺ O(n ^ 2)

#? 🧺 Space complexity ➺ O(log n)

class Solution:
      def partition(self, i, cur: int, target: int, s: str):
            """
            Recursively checks if the number can be partitioned such that the sum of the segments equals the target.

            :param i: Current index in the string s
            :param cur: Current sum of the partitioned numbers
            :param target: The target sum to achieve
            :param s: The squared number as a string
            :return: True if a valid partition exists, otherwise False
            """
            # Base case: If we have processed the entire string and sum equals target
            if i == len(s) and cur == target:
                  return True

            # Try different partitions from index i to the end of the string
            for j in range(i, len(s)):
                  # Recursively check if the remaining part can sum up to target
                  if self.partition(j + 1, cur + int(s[i : j + 1]), target, s):
                        return True

            return False

      def punishmentNumber(self, n: int) -> int:
            punishment = 0

            # Iterate over all numbers from 1 to n
            for i in range(1, n + 1):
                  # Check if the square of i can be partitioned to sum to i
                  if self.partition(0, 0, i, str(i * i)):
                        punishment += i * i  # Add the squared value to punishment

            return punishment
