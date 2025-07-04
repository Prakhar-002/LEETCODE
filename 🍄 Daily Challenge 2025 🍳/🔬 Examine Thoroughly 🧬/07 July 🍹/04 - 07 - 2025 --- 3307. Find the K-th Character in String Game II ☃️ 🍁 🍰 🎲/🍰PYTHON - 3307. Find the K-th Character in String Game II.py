#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3307

#? ⌚ Time complexity ➺ O(log k)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def kthCharacter(self, k: int, operations: List[int]) -> str:
            ans = 0  # Counter for how many operations (1s) we encounter

            while k != 1:
                  t = k.bit_length() - 1  # Get the highest set bit (floor(log2(k)))

                  # If k is a power of 2, we go one level higher (t - 1)
                  if (1 << t) == k:
                        t -= 1

                  k -= 1 << t  # Move to the "parent" in binary tree

                  # If operations[t] is 1, count the operation
                  if operations[t]:
                        ans += 1

            # Return the final character after modulo 26 offset from 'a'
            return chr(ord("a") + (ans % 26))
