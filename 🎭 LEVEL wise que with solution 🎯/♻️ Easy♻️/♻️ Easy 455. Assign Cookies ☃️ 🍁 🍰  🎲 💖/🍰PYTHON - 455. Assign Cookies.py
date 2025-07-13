#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 455

#? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(g)

#? 🧺 Space complexity ➺ O(1)  👉🏻 m = len(s)

class Solution:
      def findContentChildren(self, g: List[int], s: List[int]) -> int:
            # g = list of children's greed factors
            # s = list of cookie sizes

            g_len, s_len = len(g), len(s)

            # Sort both lists to allow greedy matching
            g.sort()  # Sort greed factors in ascending order
            s.sort()  # Sort cookie sizes in ascending order

            g_idx, s_idx, content = 0, 0, 0

            # Loop through both greed and cookie lists
            while g_idx < g_len and s_idx < s_len:

                  # If the current cookie is too small for the current child,
                  # skip to the next larger cookie
                  while s_idx < s_len and g[g_idx] > s[s_idx]:
                        s_idx += 1

                  # If a suitable cookie is found
                  if s_idx < s_len:
                        content += 1  # This child is content
                        s_idx += 1    # Move to the next cookie

                  g_idx += 1  # Move to the next child

            # Return the total number of content children
            return content
