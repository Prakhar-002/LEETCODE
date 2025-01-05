#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2381

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def shiftingLetters(self, s: str, shifts: List[List[int]]) -> str:
            # Create a difference array to track shift operations
            diff = [0] * (len(s) + 1)

            # Populate the difference array based on the shifts
            for l, r, d in shifts:
                  # If direction is 1 (right shift), increase diff[r + 1] and decrease diff[l]
                  # If direction is 0 (left shift), decrease diff[r + 1] and increase diff[l]
                  diff[r + 1] += 1 if d else -1
                  diff[l] += -1 if d else 1

            # Initialize cumulative shift value
            shift = 0
            # Convert the string characters to numerical values (a -> 0, ..., z -> 25)
            nums = [ord(c) - ord("a") for c in s]

            # Apply the cumulative shifts in reverse order
            for i in range(len(diff) - 1, 0, -1):
                  # Add the current value in diff to the cumulative shift
                  shift += diff[i]

                  # Adjust the character value using the cumulative shift
                  nums[i - 1] = (nums[i - 1] + shift + 26) % 26

            # Convert the numerical values back to characters
            result = [chr(ord("a") + n) for n in nums]

            # Join the characters into a final shifted string
            return "".join(result)


