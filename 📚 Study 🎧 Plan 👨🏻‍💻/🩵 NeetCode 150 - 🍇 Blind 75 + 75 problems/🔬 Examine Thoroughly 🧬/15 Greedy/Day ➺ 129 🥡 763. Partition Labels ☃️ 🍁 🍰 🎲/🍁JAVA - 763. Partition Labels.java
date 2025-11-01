//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 763

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(s)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public List<Integer> partitionLabels(String s) {
            // Step 1: Store the last occurrence index of each character
            int[] lastIdx = new int[26]; // Array to store last index of each character (a-z)

            // Populate last occurrence indices
            for (int i = 0; i < s.length(); i++) {
                  lastIdx[s.charAt(i) - 'a'] = i; // Store last index of each character
            }

            // Step 2: Partitioning process
            List<Integer> partitions = new ArrayList<>();
            int size = 0, end = 0; // Variables to track partition size and partition end

            // Iterate through the string to determine partitions
            for (int i = 0; i < s.length(); i++) {
                  size++; // Increase partition size
                  end = Math.max(end, lastIdx[s.charAt(i) - 'a']); // Update partition end

                  // If the current index matches the partition end
                  if (i == end) {
                        partitions.add(size); // Store partition size
                        size = 0; // Reset size for the next partition
                  }
            }

            return partitions; // Return list of partition sizes
      }
}