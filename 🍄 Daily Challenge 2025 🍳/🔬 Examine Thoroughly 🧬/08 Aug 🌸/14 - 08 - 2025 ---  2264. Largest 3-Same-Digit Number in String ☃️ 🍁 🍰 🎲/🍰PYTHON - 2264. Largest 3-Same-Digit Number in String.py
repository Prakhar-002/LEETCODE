#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2264

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(num)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def largestGoodInteger(self, num: str) -> str:
            # Variable to store the largest "good integer" substring found so far
            res = ""

            # Iterate through the string, but stop at len(num) - 2
            # because we're checking triples of consecutive digits
            for i in range(len(num) - 2):
                  # Check if the current digit and the next two are the same
                  if num[i] == num[i + 1] == num[i + 2]:
                        # If res is empty OR current triple digit > recorded result
                        if res == "" or num[i] > res[0]:
                              # Store the 3-digit good integer substring
                              res = num[i : i + 3]

            # Return the largest good integer found (empty if none found)
            return res
