#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 42

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(Height)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def trap(self, height):
            n = len(height)

            # Array to store the maximum height to the right of each element
            right = [0] * n
            right[0] = height[0]

            # Populate the right max array
            for i in range(1, n):
                  right[i] = max(right[i - 1], height[i])

            # Array to store the maximum height to the left of each element
            left = [0] * n
            left[n - 1] = height[n - 1]

            # Populate the left max array
            for i in range(n - 2, -1, -1):
                  left[i] = max(left[i + 1], height[i])

            # Calculate the total volume of water trapped
            volume = 0
            
            for i in range(n):
                  # Water trapped at each index is determined by the minimum
                  # of left and right max heights minus the height at the index
                  volume += (min(left[i], right[i]) - height[i])

            return volume  # Return the total water trapped
