//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

public class RandomizedCollection {
      // List to store all values (including duplicates) for O(1) random access
      ArrayList<Integer> numList;
      // Map: value → set of indices where it appears in numList
      HashMap<Integer, Set<Integer>> idx;
      // Random object to generate random indices
      java.util.Random rand = new java.util.Random();

      /** Initialize your data structure here. */
      public RandomizedCollection() {
            // Initialize the list to store values
            numList = new ArrayList<Integer>();
            // Initialize the map to store value → set of indices
            idx = new HashMap<Integer, Set<Integer>>();
      }

      /**
       * Inserts a value to the collection. Returns true if the collection did not
       * already contain the specified element.
       */
      public boolean insert(int val) {
            // If val is not in the map, create a new LinkedHashSet for its indices
            if (!idx.containsKey(val))
                  idx.put(val, new LinkedHashSet<Integer>());
            // Add the current index (end of list) to the set of indices for this value
            idx.get(val).add(numList.size());
            // Append the value to the list
            numList.add(val);
            // Return true if this was the first occurrence of the value (set size is 1)
            return idx.get(val).size() == 1;
      }

      /**
       * Removes a value from the collection. Returns true if the collection contained
       * the specified element.
       */
      public boolean remove(int val) {
            // If val is not in the collection, return false
            if (!idx.containsKey(val) || idx.get(val).size() == 0)
                  return false;
            // Get any index where val appears (we remove one occurrence)
            int remove_idx = idx.get(val).iterator().next();
            // Remove this index from val’s set
            idx.get(val).remove(remove_idx);
            // Get the last value in the list
            int last = numList.get(numList.size() - 1);
            // Move the last value to the position of the value being removed
            numList.set(remove_idx, last);
            // Update the index set for the last value:
            // - Add the index remove_idx to last’s set
            idx.get(last).add(remove_idx);
            // - Remove the old last index (size-1) from last’s set
            idx.get(last).remove(numList.size() - 1);
            // Remove the last element from the list (the value we just moved is now
            // duplicated at the end)
            numList.remove(numList.size() - 1);
            return true;
      }

      /** Get a random element from the collection. */
      public int getRandom() {
            // Return a random element from the list
            return numList.get(rand.nextInt(numList.size()));
      }
}
