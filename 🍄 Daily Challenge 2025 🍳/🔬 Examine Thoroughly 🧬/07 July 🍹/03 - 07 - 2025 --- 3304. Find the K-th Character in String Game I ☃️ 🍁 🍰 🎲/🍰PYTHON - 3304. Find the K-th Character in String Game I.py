#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3304

#? ⌚ Time complexity ➺ O(log k) 

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def kthCharacter(self, k: int) -> str:
            ans = 0  # This keeps track of how many times we move down the "right side" in a conceptual binary tree.

            while k != 1:
                  # Find the position of the highest bit in k (same as log2(k))
                  t = k.bit_length() - 1

                  # If k is a power of 2 (like 2, 4, 8...), reduce t by 1
                  if (1 << t) == k:
                        t -= 1

                  # Subtract 2^t from k to move to the next relative position in the conceptual tree
                  k -= 1 << t

                  # Every such move increases the "level" or letter index
                  ans += 1

            # Convert the index (0 for 'a', 1 for 'b', ...) into the actual character
            return chr(ord("a") + ans)

