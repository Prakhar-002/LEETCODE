//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3321

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Helper {

      private int x;                       // Number of top elements to consider
      private long result;                 // Running sum of top x (occurrence * number) pairs
      private TreeSet<Pair> large, small; // Sets to maintain top x and remaining pairs respectively
      private Map<Integer, Integer> occ;  // Map to track occurrence counts of numbers

      // Pair class representing (occurrence, number)
      private static class Pair implements Comparable<Pair> {

            int first;   // occurrence count
            int second;  // the number itself

            Pair(int first, int second) {
                  this.first = first;
                  this.second = second;
            }

            @Override
            public int compareTo(Pair other) {
                  // Sort primarily by occurrence count, then by number value
                  if (this.first != other.first) {
                        return Integer.compare(this.first, other.first);
                  }
                  return Integer.compare(this.second, other.second);
            }

            @Override
            public boolean equals(Object obj) {
                  if (this == obj) return true;
                  if (obj == null || getClass() != obj.getClass()) return false;
                  Pair pair = (Pair) obj;
                  return first == pair.first && second == pair.second;
            }

            @Override
            public int hashCode() {
                  return Objects.hash(first, second);
            }
      }

      // Constructor initializes data structures and variables
      public Helper(int x) {
            this.x = x;
            this.result = 0;
            this.large = new TreeSet<>();
            this.small = new TreeSet<>();
            this.occ = new HashMap<>();
      }

      // Insert a number: update its occurrence count, maintain sets accordingly
      public void insert(int num) {
            if (occ.containsKey(num) && occ.get(num) > 0) {
                  // Remove old pair of (occurrence, num) before incrementing
                  internalRemove(new Pair(occ.get(num), num));
            }
            // Increment occurrence count
            occ.put(num, occ.getOrDefault(num, 0) + 1);
            // Insert updated pair
            internalInsert(new Pair(occ.get(num), num));
      }

      // Remove a number: update occurrence count and adjust sets
      public void remove(int num) {
            // Remove current (occurrence, num) pair
            internalRemove(new Pair(occ.get(num), num));
            // Decrement occurrence count
            occ.put(num, occ.get(num) - 1);
            // If still present, insert updated pair back
            if (occ.get(num) > 0) {
                  internalInsert(new Pair(occ.get(num), num));
            }
      }

      // Retrieves the current sum of top x (occurrence * number) pairs
      public long get() {
            return result;
      }

      // Inserts a pair into either large or small set while maintaining size invariant on large
      private void internalInsert(Pair p) {
            // If large set has space or new pair is larger than smallest in large
            if (large.size() < x || p.compareTo(large.first()) > 0) {
                  // Add to the running sum since this pair is in large
                  result += (long) p.first * p.second;
                  large.add(p);
                  // If large size exceeds x, move smallest element to small
                  if (large.size() > x) {
                        Pair toRemove = large.first();
                        result -= (long) toRemove.first * toRemove.second;
                        large.remove(toRemove);
                        small.add(toRemove);
                  }
            } else {
                  // Insert into small set otherwise
                  small.add(p);
            }
      }

      // Removes a pair from the sets and updates the running sum accordingly
      private void internalRemove(Pair p) {
            // If pair belongs to the large set
            if (p.compareTo(large.first()) >= 0) {
                  // Subtract its contribution
                  result -= (long) p.first * p.second;
                  large.remove(p);
                  // If possible, promote the largest small pair to large
                  if (!small.isEmpty()) {
                        Pair toAdd = small.last();
                        result += (long) toAdd.first * toAdd.second;
                        small.remove(toAdd);
                        large.add(toAdd);
                  }
            } else {
                  // Just remove from small set
                  small.remove(p);
            }
      }
}

class Solution {

      // Method to calculate sliding window results for top x sums of occurrence*number pairs
      public long[] findXSum(int[] nums, int k, int x) {
            Helper helper = new Helper(x);
            List<Long> ans = new ArrayList<>();

            for (int i = 0; i < nums.length; i++) {
                  // Insert current number in the sliding window
                  helper.insert(nums[i]);
                  // When window exceeds size k, remove the left-most element
                  if (i >= k) {
                        helper.remove(nums[i - k]);
                  }
                  // Once window size is k, record the current sum
                  if (i >= k - 1) {
                        ans.add(helper.get());
                  }
            }

            // Convert list to array and return
            return ans.stream().mapToLong(Long::longValue).toArray();
      }
}
