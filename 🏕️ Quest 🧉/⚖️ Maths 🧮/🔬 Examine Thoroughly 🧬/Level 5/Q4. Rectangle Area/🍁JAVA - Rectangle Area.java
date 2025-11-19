//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L5 Q4

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

// Java version
class Solution {
      public int computeArea(int ax1, int ay1, int ax2, int ay2,
                              int bx1, int by1, int bx2, int by2) {
            // Calculate area of rectangle A
            int area1 = (ax2 - ax1) * (ay2 - ay1);
            // Calculate area of rectangle B
            int area2 = (bx2 - bx1) * (by2 - by1);

            // Calculate overlapping width (0 if no overlap)
            int overlapWidth = Math.max(0, Math.min(ax2, bx2) - Math.max(ax1, bx1));
            // Calculate overlapping height (0 if no overlap)
            int overlapHeight = Math.max(0, Math.min(ay2, by2) - Math.max(ay1, by1));

            // Total area = sum of individual areas - overlapping area
            return area1 + area2 - (overlapWidth * overlapHeight);
      }
}
