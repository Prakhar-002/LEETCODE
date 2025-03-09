#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3208

#? ⌚ Time complexity ➺ O(n + k) 👉🏻  n = len(colors)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def numberOfAlternatingGroups(self, colors: List[int], k: int) -> int:
            N = len(colors)  # Total number of elements in the colors list
            altGroup = 0  # Counter for alternating groups of at least length k

            alt_elem_cnt = 1  # Count of consecutive alternating elements
            last_color = colors[0]  # Track the last seen color

            # Step 1: Traverse the colors list and count alternating sequences
            for i in range(1, N):
                  if colors[i] == last_color:  # Reset count if the same color repeats
                        alt_elem_cnt = 1
                        last_color = colors[i]
                        continue

                  alt_elem_cnt += 1  # Increase count for alternating colors

                  if alt_elem_cnt >= k:  # If the alternating sequence is long enough
                        altGroup += 1

                  last_color = colors[i]  # Update the last seen color

            # Step 2: Additional check for the first k-1 elements (potential wrap-around)
            for i in range(k - 1):
                  if colors[i] == last_color:  # Stop if colors repeat
                        break

                  alt_elem_cnt += 1  # Extend alternating sequence

                  if alt_elem_cnt >= k:  # If still valid, count the group
                        altGroup += 1

                  last_color = colors[i]  # Update last seen color

            return altGroup  # Return the count of alternating groups of at least k
