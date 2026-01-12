//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L5 Q1

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class RangeModule {
      // TreeSet of non-overlapping intervals sorted by END time (then START time)
      TreeSet<Interval> ranges;

      public RangeModule() {
            // Initialize TreeSet with custom comparator (from Interval.compareTo)
            ranges = new TreeSet<>();
      }

      public void addRange(int left, int right) {
            // Get iterator starting from intervals ending >= left
            // tailSet(new Interval(0, left)) finds first interval where end >= left
            Iterator<Interval> itr = ranges
                        .tailSet(new Interval(0, left))
                        .iterator();

            // Merge all overlapping/contiguous intervals
            while (itr.hasNext()) {
                  Interval iv = itr.next();
                  // Stop when we find interval starting after right (no overlap)
                  if (right < iv.left) {
                        break;
                  }
                  // Expand merge bounds to include this interval
                  left = Math.min(left, iv.left);
                  right = Math.max(right, iv.right);
                  // Remove merged interval
                  itr.remove();
            }

            // Add the merged interval
            ranges.add(new Interval(left, right));
      }

      public boolean queryRange(int left, int right) {
            // higher() finds first interval strictly greater than Interval(0, left)
            // Due to compareTo, this gives first interval ending > left
            Interval iv = ranges.higher(new Interval(0, left));

            // Check if this interval completely covers [left, right)
            return (iv != null && iv.left <= left && right <= iv.right);
      }

      public void removeRange(int left, int right) {
            // Get iterator starting from intervals ending >= left-1
            Iterator<Interval> itr = ranges
                        .tailSet(new Interval(0, left - 1))
                        .iterator();

            // Collect leftover parts and remove overlapping intervals
            ArrayList<Interval> todo = new ArrayList<>();
            while (itr.hasNext()) {
                  Interval iv = itr.next();
                  // Stop when we find interval starting after right
                  if (right < iv.left) {
                        break;
                  }

                  // Save left part if exists (before left)
                  if (iv.left < left) {
                        todo.add(new Interval(iv.left, left));
                  }
                  // Save right part if exists (after right)
                  if (right < iv.right) {
                        todo.add(new Interval(right, iv.right));
                  }
                  // Remove overlapping interval
                  itr.remove();
            }

            // Add back leftover parts
            for (Interval iv : todo) {
                  ranges.add(iv);
            }
      }
}

// Custom Interval class with compareTo based on END time (primary), START time
// (secondary)
class Interval implements Comparable<Interval> {
      int left;
      int right;

      public Interval(int left, int right) {
            this.left = left;
            this.right = right;
      }

      // Compare by END time first, then START time (for TreeSet ordering)
      // This ensures tailSet/higher work correctly for range queries
      public int compareTo(Interval that) {
            if (this.right == that.right) {
                  return this.left - that.left;
            }
            return this.right - that.right;
      }
}
