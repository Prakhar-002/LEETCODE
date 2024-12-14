//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1207

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public boolean uniqueOccurrences(int[] arr) {
            // Count the frequency of each element using a HashMap
            Map<Integer, Integer> frequencyMap = new HashMap<>();
            for (int num : arr) {
                  frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
            }

            // Use a HashSet to store unique frequency values
            Set<Integer> frequencySet = new HashSet<>(frequencyMap.values());

            // Check if the size of the map values equals the size of the set
            return frequencyMap.size() == frequencySet.size();
      }
}
