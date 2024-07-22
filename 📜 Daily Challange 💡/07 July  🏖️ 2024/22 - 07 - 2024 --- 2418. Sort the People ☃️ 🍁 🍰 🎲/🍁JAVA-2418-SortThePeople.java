//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2418

//? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

//? 🧺 Space complexity -> O(n) 👉🏻 people heights array 

import java.util.*;

class Solution {
      public String[] sortPeople(String[] names, int[] heights) {
            // first map height with their name
            Map<Integer, String> heightNameMap = new HashMap<>();

            for (int i = 0; i < heights.length; i++) {
                  // map height : name
                  heightNameMap.put(heights[i], names[i]);
            }

            // sorted people height
            Arrays.sort(heights);

            String[] peopleHeights = new String[heights.length];
            int peopleIdx = 0;

            // traverse in reverse order with sorted height
            for (int i = heights.length - 1; i >= 0; i--) {
                  // append the corresponding name assigned with height
                  peopleHeights[peopleIdx++] = heightNameMap.get(heights[i]);
            }

            return peopleHeights;
      }
}