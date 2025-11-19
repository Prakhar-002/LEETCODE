#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L5 Q4

#? ⌚ Time complexity ➺ O(1) 

#? 🧺 Space complexity ➺ O(1)

class Solution(object):
      def computeArea(self, ax1, ay1, ax2, ay2, bx1, by1, bx2, by2):
            # Calculate area of rectangle A
            area1 = (ax2 - ax1) * (ay2 - ay1)
            # Calculate area of rectangle B
            area2 = (bx2 - bx1) * (by2 - by1)

            # Calculate width of overlapping area, 0 if no overlap
            overlap_width = max(0, min(ax2, bx2) - max(ax1, bx1))
            # Calculate height of overlapping area, 0 if no overlap
            overlap_height = max(0, min(ay2, by2) - max(ay1, by1))

            # Total area = sum of individual areas - overlapping area
            return area1 + area2 - (overlap_width * overlap_height)
