#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(sandwiches)

#? 🧺 Space complexity ➺ O(1) 

from collections import Counter

class Solution:
      def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
            # Count the number of students preferring each type (0 or 1)
            cnt_std = Counter(students)

            # Iterate through sandwiches in order
            for sandwich in sandwiches:
                  # If no student prefers this sandwich type, return remaining students
                  if cnt_std[sandwich] == 0:
                        return cnt_std[(sandwich + 1) % 2]

                  # Decrement count for students who can take this sandwich
                  cnt_std[sandwich] -= 1

            # If all sandwiches distributed, no students left unable to eat
            return 0
