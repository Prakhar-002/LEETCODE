#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2554

#? ⌚ Time complexity ➺ O(n) 👉🏻 n = given 

#? 🧺 Space complexity ➺ O(m) 👉🏻 m = len(banned)

class Solution:
      def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
            # Initialize the current sum of selected numbers to zero
            curSum = 0

            # Initialize the counter for how many numbers have been selected
            count = 0

            # Convert the banned list into a set for faster lookup
            bannedSet = set(banned)

            # Iterate through numbers from 1 to n
            for num in range(1, n + 1):
                  # Check if the current number is not banned and adding it will not exceed maxSum
                  if num not in bannedSet and curSum + num <= maxSum:
                        # Increment the count of selected numbers
                        count += 1

                        # Add the current number to the running total sum
                        curSum += num

            # Return the count of numbers that meet the conditions
            return count
