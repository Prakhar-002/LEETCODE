#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 670

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maximumSwap(self, num: int) -> int:
            # Step 1: Extract digits into a list
            digits = []
            n = num

            # Use modulus and division to extract each digit and store in a list
            while n > 0:
                  digits.append(n % 10)
                  n //= 10

            # Reverse the digits list to restore the correct order 
            # (most significant to least significant)
            digits = digits[::-1]

            # Initialize variables to keep track of the maximum digit and swap positions
            max_digit = -1
            max_idx = -1
            swap_idx = prev_max_idx = -1

            # Step 2: Traverse digits from right to left
            for i in reversed(range(len(digits))):
                  # If the current digit is greater than the max_digit seen so far, 
                  # update max_digit and max_idx
                  if digits[i] > max_digit:
                        max_digit = digits[i]
                        max_idx = i

                  # If the current digit is smaller than the max_digit, 
                  # store the indices for a potential swap
                  if digits[i] < max_digit:
                        swap_idx, prev_max_idx = i, max_idx

            # Step 3: Perform the swap if needed
            if swap_idx != -1:
                  # Swap the smaller digit with the largest digit that comes after it
                  digits[swap_idx], digits[prev_max_idx] = digits[prev_max_idx], digits[swap_idx]

            # Step 4: Reconstruct the number from the modified list of digits
            result = 0
            for d in digits:
                  # Build the number by shifting and adding digits
                  result = result * 10 + d  

            # Return the result
            return result
