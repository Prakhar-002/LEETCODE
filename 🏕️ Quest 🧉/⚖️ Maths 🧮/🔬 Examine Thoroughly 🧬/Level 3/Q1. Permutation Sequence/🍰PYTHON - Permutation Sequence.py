#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L3 Q1

#? ⌚ Time complexity ➺ O(n) 

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def getPermutation(self, n: int, k: int) -> str:
            nums = [str(i) for i in range(1, n + 1)]  # Initialize list of numbers as strings

            fact = [1] * (n + 1)  # Initialize factorial lookup list

            # Precompute factorials from 1! to n!
            for i in range(1, n + 1):
                  fact[i] = fact[i - 1] * i 

            k -= 1  # Convert k to zero-based index for easier calculation

            ans = []  # Store result permutation characters

            # Find each position's value by dividing k by (i-1)!
            for i in range(n, 0, -1):
                  idx = k // fact[i - 1]  # Determine index to pick from nums

                  ans.append(nums[idx])    # Append chosen number to answer

                  nums.pop(idx)            # Remove chosen number from list

                  k %= fact[i - 1]         # Update k to remainder

            return "".join(ans)  # Join list into string and return
