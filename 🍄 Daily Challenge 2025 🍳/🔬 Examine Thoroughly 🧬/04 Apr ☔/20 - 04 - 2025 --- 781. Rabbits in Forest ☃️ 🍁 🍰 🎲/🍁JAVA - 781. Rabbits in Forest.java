//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 781

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(answers) 

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int numRabbits(int[] answers) {
            // Map to count the frequency of each answer
            Map<Integer, Integer> countMap = new HashMap<>();

            // Count how many times each answer appears
            for (int ans : answers) {
                  countMap.put(ans, countMap.getOrDefault(ans, 0) + 1);
            }

            // Final total count of rabbits in the forest
            int totalRabbits = 0;

            // Iterate through each entry in the map
            for (Map.Entry<Integer, Integer> entry : countMap.entrySet()) {
                  int answer = entry.getKey();         // Number of other same-colored rabbits
                  int freq = entry.getValue();         // Number of rabbits giving this answer

                  int groupSize = answer + 1;          // Group size = answer + 1 (include self)

                  // Calculate how many such full groups we need
                  int numGroups = freq / groupSize;
                  if (freq % groupSize != 0) {
                        numGroups += 1;               // Add extra group if there are leftovers
                  }

                  // Add total rabbits from these groups
                  totalRabbits += numGroups * groupSize;
            }

            // Return the minimum possible number of rabbits
            return totalRabbits;
      }
}
