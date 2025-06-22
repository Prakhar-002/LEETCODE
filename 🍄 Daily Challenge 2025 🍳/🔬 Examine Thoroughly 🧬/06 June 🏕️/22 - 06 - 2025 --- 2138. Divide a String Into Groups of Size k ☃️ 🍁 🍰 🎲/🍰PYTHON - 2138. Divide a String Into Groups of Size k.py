#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2139

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def divideString(self, s: str, k: int, fill: str) -> List[str]:
            n = len(s)

            # If the string's length is not a multiple of k, pad it with the fill character
            if n % k != 0:
                  padding = k - (n % k)          # Calculate how many characters are needed
                  s += fill * padding            # Append `fill` character to the end

            groups = []  # Result list to store each k-length group

            # Slice the string into chunks of size k
            for i in range(0, len(s), k):
                  groups.append(s[i : i + k])

            return groups
