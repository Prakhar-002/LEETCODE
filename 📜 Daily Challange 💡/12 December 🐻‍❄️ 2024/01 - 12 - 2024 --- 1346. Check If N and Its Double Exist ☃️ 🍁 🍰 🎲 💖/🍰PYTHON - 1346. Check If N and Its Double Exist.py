#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1346

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def checkIfExist(self, arr):
            # Initialize an empty set to store numbers we've seen so far
            seen = set()

            # Iterate through each number in the array
            for num in arr:
                  # Check if the current number's double exists in the set
                  # OR if the current number is divisible by 2 and its half exists in the set
                  if num * 2 in seen or (num % 2 == 0 and num // 2 in seen):
                        return True  # If either condition is true, return True

                  # Add the current number to the seen set
                  seen.add(num)

            # If no such pair exists, return False
            return False

