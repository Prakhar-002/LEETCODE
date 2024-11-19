#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1652

#? ⌚ Time complexity ➺ O(n + k) 👉🏻  n = len(code)

#? 🧺 Space complexity ➺ O(1)

class Solution: 
      def decrypt(self, code: List[int], k: int) -> List[int]:
            # Get the length of the code list
            N = len(code)

            # Initialize a list of zeros to store the decrypted code
            decryptedCode = [0] * N

            # Initialize pointers and the current sum
            l = 0
            cur_sum = 0

            # Iterate over the extended range of indices to handle circular behavior
            for r in range(N + abs(k)):
                  # Add the current value to the sum (using modulo for circular behavior)
                  cur_sum += code[r % N]

                  # If the window size exceeds the absolute value of k, remove the leftmost value
                  if r - l + 1 > abs(k):
                        cur_sum -= code[l % N]
                        l = (l + 1) % N

                  # When the window size equals the absolute value of k
                  if r - l + 1 == abs(k):
                        if k > 0:
                              # If k is positive, update the value at the (l-1)%N index
                              decryptedCode[(l - 1) % N] = cur_sum
                        elif k < 0:
                              # If k is negative, update the value at the (r+1)%N index
                              decryptedCode[(r + 1) % N] = cur_sum

            # Return the decrypted code array
            return decryptedCode
