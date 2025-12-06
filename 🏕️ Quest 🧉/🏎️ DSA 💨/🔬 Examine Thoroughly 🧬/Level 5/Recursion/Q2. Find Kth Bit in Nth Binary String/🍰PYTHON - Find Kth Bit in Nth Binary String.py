
#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1545

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findKthBit(self, n: int, k: int) -> str:
            # The length of the binary string for the given n is (2^n) + 1
            length = (1 << n) - 1
            # Track whether the result is inverted or not
            invert = False  

            # Loop to reduce the problem size until length becomes 1
            while length > 1:
                  # Calculate the midpoint of the current length
                  half = length // 2  

                  # Case 1: If k is in the first half of the current length
                  if k <= half:
                        # Reduce the length to the first half
                        length = half  

                  # Case 2: If k is in the second half, excluding the middle element
                  elif k > half + 1:
                        # Update k to reflect the mirrored position
                        k = 1 + length - k 
                        # Reduce the length to the first half+ 1  
                        length = half  
                        # Toggle the inversion state
                        invert = not invert  

                  # Case 3: If k is the middle element, return the corresponding bit
                  else:
                        # Return the middle bit based on inversion
                        return "1" if not invert else "0"  

            # If we exit the loop, return the appropriate bit (0 or 1) based on the inversion state
            return "0" if not invert else "1"

#!---------------------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def findKthBit(self, n: int, k: int) -> str:
            # Base case: When n = 1, the binary string is "0"
            if n == 1:
                  return '0'

            # Find the length of the current string Sn, which is 2^n - 1
            length = (1 << n) - 1

            # Find the middle position
            mid = length // 2 + 1

            # If k is the middle position, return '1'
            if k == mid:
                  return '1'

            # If k is in the first half, find the bit in Sn-1
            if k < mid:
                  return self.findKthBit(n - 1, k)

            # If k is in the second half, find the bit in Sn-1 and invert it
            return '1' if self.findKthBit(n - 1, length - k + 1) == '0' else '0'
