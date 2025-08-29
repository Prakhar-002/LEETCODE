#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3021

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def flowerGame(self, n: int, m: int) -> int:
            # For each pair (x, y) where 1 <= x <= n and 1 <= y <= m,
            # Alice wins if x + y is odd (one number is even, the other is odd).

            # Number of odd choices from n (i.e. x odd): ceil(n / 2)
            # Number of even choices from n (i.e. x even): floor(n / 2)
            # Likewise for m.

            # Alice's win count = (odd n * even m) + (odd m * even n)
            # This covers all pairs making x + y odd.
            return ((ceil(n / 2) * floor(m / 2)) + 
                   (ceil(m / 2) * floor(n / 2)))

#!--------------------------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def flowerGame(self, n: int, m: int) -> int:
            # For all pairs (x, y) where 1 <= x <= n and 1 <= y <= m:
            # Alice wins if x + y is odd (one is odd, one is even).
            # Exactly half of the n * m possible pairs will meet this condition.
            # Thus, simply return (n * m) // 2.
            return (m * n) // 2
