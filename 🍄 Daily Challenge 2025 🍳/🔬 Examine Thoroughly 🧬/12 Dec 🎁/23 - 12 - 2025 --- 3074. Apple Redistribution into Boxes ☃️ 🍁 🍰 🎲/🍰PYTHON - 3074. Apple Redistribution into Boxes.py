#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3074

#? ⌚ Time complexity ➺ O(m log m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
            # Count total apples from all packs
            apples = sum(apple)

            # Sort boxes by capacity in descending order (largest first)
            # This greedy strategy minimizes the number of boxes used
            capacity.sort(reverse=True)

            boxes = 0  # number of boxes used so far

            # Use boxes one by one (largest first)
            for n in capacity:
                  # If all apples are already stored, return current box count
                  if apples <= 0:
                        return boxes
                  # Use this box: subtract its capacity from remaining apples
                  apples -= n
                  boxes += 1

            # If we finish the loop, return the total number of boxes used
            return boxes
