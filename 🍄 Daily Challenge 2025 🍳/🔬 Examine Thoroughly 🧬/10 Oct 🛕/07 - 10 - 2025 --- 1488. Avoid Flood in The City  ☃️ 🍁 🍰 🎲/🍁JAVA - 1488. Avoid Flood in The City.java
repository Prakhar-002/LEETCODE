//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1488

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] avoidFlood(int[] rains) {
            int n = rains.length;
            int[] res = new int[n];

            // 1 is default for sunny days, set rainy days to -1 later
            Arrays.fill(res, 1);

            // TreeSet to maintain indices of sunny days in sorted order
            TreeSet<Integer> sunnyDays = new TreeSet<>();

            // Map to store last rain day for each lake
            Map<Integer, Integer> lastRain = new HashMap<>();

            for (int day = 0; day < n; day++) {
                  int lake = rains[day];
                  if (lake == 0) {
                        // Sunny day, add to set
                        sunnyDays.add(day);
                  } else {
                        // Rainy day
                        res[day] = -1;

                        if (lastRain.containsKey(lake)) {
                              // The lake was previously full, must dry before raining again
                              int lastRainDay = lastRain.get(lake);

                              // Find the earliest sunny day after the last rain day using higher()
                              Integer dryDay = sunnyDays.higher(lastRainDay);

                              if (dryDay == null) {
                                    // No sunny day found to dry the lake, flood occurs
                                    return new int[0];
                              }

                              // Use that sunny day to dry this lake
                              res[dryDay] = lake;
                              sunnyDays.remove(dryDay);
                        }

                        // Update last rain day for this lake
                        lastRain.put(lake, day);
                  }
            }

            return res;
      }
}
