//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L3 Q1

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class RandomizedSet {
      // numMap: maps value to its index in numList
      private Map<Integer, Integer> numMap;
      // numList: stores all values in a list for O(1) random access
      private List<Integer> numList;
      // Random object for getRandom
      private Random rand;

      public RandomizedSet() {
            numMap = new HashMap<>();
            numList = new ArrayList<>();
            rand = new Random();
      }

      public boolean insert(int val) {
            // Check if val is already present
            boolean res = !numMap.containsKey(val);
            if (res) {
                  // Add val to the map with its index (current end of list)
                  numMap.put(val, numList.size());
                  // Append val to the list
                  numList.add(val);
            }
            return res;
      }

      public boolean remove(int val) {
            // Check if val is present
            boolean res = numMap.containsKey(val);
            if (res) {
                  // Get index of val in the list
                  int idx = numMap.get(val);
                  // Get the last value in the list
                  int lastVal = numList.get(numList.size() - 1);
                  // Move lastVal to the position of val
                  numList.set(idx, lastVal);
                  // Remove the last element (val is now overwritten)
                  numList.remove(numList.size() - 1);
                  // Update the map: lastVal is now at index idx
                  numMap.put(lastVal, idx);
                  // Remove val from the map
                  numMap.remove(val);
            }
            return res;
      }

      public int getRandom() {
            // Return a random element from the list
            return numList.get(rand.nextInt(numList.size()));
      }
}
