//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2349

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(unique Index)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class NumberContainers {
      // HashMap to store the mapping of a number to a sorted set of indices.
      private HashMap<Integer, TreeSet<Integer>> num_idx_set;

      // HashMap to store the mapping of an index to a number.
      private HashMap<Integer, Integer> idx_num;

      // Constructor initializes the HashMaps.
      public NumberContainers() {
            num_idx_set = new HashMap<>();
            idx_num = new HashMap<>();
      }

      /*
      * Updates the mapping of an index to a new number.
      * If the index was previously associated with a different number,
      * it removes the index from the old number's set.
      */
      public void change(int index, int number) {
            // Check if the index already has a number assigned
            if (idx_num.containsKey(index)) {
                  int prevNum = idx_num.get(index); // Get the previous number
                  TreeSet<Integer> set = num_idx_set.get(prevNum); // Get its index set

                  // Remove the index from the previous number's TreeSet
                  set.remove(index);

                  // If no more indices are associated with the previous number, remove the entry
                  if (set.isEmpty()) {
                        num_idx_set.remove(prevNum);
                  }
            }

            // Assign the new number to the index
            idx_num.put(index, number);

            // Add the index to the TreeSet corresponding to the new number
            num_idx_set.computeIfAbsent(number, k -> new TreeSet<>()).add(index);
      }

      /*
      * Finds the smallest index associated with the given number.
      * If no index is found, returns -1.
      */
      public int find(int number) {
            // Check if the number exists in the mapping and has associated indices
            if (!num_idx_set.containsKey(number) || num_idx_set.get(number).isEmpty()) {
                  return -1;
            }
            // Return the smallest index stored in the TreeSet
            return num_idx_set.get(number).first(); // O(1) operation in TreeSet
      }
}
