#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1524

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def numOfSubarrays(self, arr: List[int]) -> int:
            odd_sum_count = 0  # Count of subarrays with an odd sum
            prefix_sum = 0  # Stores the cumulative sum
            odd_count = 0  # Tracks the number of odd prefix sums encountered
            even_count = 0  # Tracks the number of even prefix sums encountered
            MOD = 10**9 + 7  # Modulo to prevent overflow

            # Iterate through each number in the array
            for num in arr:
                  prefix_sum += num  # Update the prefix sum

                  # Check if the prefix sum is odd
                  if prefix_sum % 2 == 1:  
                        # If odd, it can form a valid subarray with all previous even prefix sums
                        odd_sum_count += 1 + even_count  
                        odd_count += 1  # Increase the count of odd prefix sums
                  else:
                        # If even, it can form a valid subarray with all previous odd prefix sums
                        odd_sum_count += odd_count
                        even_count += 1  # Increase the count of even prefix sums

                  # Apply modulo to keep the value within range
                  odd_sum_count %= MOD  

            return odd_sum_count  # Return the total count of subarrays with odd sums
