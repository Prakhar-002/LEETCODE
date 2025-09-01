#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1792

#? ⌚ Time complexity ➺ O(k * log(n) + n) 👉🏻  n = len(classes)

#? 🧺 Space complexity ➺ O(n)

import heapq
from typing import List

class Solution:
      def maxAverageRatio(self, classes: List[List[int]], extraStudents: int) -> float:

            # ----------------------------------------------------------
            # Step 1: Compute initial "gain" for each class
            # Each tuple is: (potential gain if add a student, passes, total students)
            # Here, gain is negative—the difference when NOT adding a student
            #   vs adding one (suits min-heap property of heapq)
            # ----------------------------------------------------------
            classes = [
                  (num / denom - (num + 1) / (denom + 1), num, denom) 
                  for num, denom in classes
            ]
            heapq.heapify(classes)  # turn list into a heap

            # ----------------------------------------------------------
            # Step 2: Fast exit if all pass ratios are already 1
            # ----------------------------------------------------------
            if classes[0][0] == 0:      # no possible gain (ratio was already 1.0)
                  return 1

            # ----------------------------------------------------------
            # Step 3: Distribute extra students greedily
            # Always choose class at heap top: highest-gain (lowest negative gain)
            # After increment, recalculate delta for further assignments
            # ----------------------------------------------------------
            for _ in range(extraStudents):
                  _, num, denom = heapq.heappop(classes)    # pop class with max gain
                  # Calculate gain after next student is added (for future assignment)
                  new_gain = (num + 1) / (denom + 1) - (num + 2) / (denom + 2)
                  heapq.heappush(classes, (new_gain, num + 1, denom + 1))

            # ----------------------------------------------------------
            # Step 4: Compute average pass ratio after all students added
            # ----------------------------------------------------------
            total_pass_ratio = sum(num / denom for _, num, denom in classes)
            return total_pass_ratio / len(classes)
