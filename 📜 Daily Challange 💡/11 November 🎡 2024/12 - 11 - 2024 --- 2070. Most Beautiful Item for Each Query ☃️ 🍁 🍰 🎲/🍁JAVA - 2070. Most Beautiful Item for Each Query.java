//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2070

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(items)

//? 🧺 Space complexity ➺ O(n + m) 👉🏻 m = len(queries) 

import java.util.*;

class Solution {
      public int[] maximumBeauty(int[][] items, int[] queries) {
            // Step 1: Sort items based on price (first element in each subarray)
            Arrays.sort(items, (a, b) -> a[0] - b[0]);

            // Step 2: Create a sorted array of queries, each element is an array [query, index]
            // where 'index' keeps track of the original position of each query
            int[][] sortedQueries = new int[queries.length][2];

            for (int i = 0; i < queries.length; i++) {
                  sortedQueries[i] = new int[] { queries[i], i };
            }

            Arrays.sort(sortedQueries, (a, b) -> a[0] - b[0]);

            // Step 3: Initialize an answer array with zeros, sized to the length of queries
            int[] answer = new int[queries.length];

            // Initialize 'maxBea' to track the maximum beauty encountered so far
            int maxBea = 0;
            // 'j' serves as the pointer to iterate over items
            int j = 0;

            // Step 4: Iterate through each query in the sorted queries array
            for (int[] query : sortedQueries) {
                  int q = query[0];
                  int i = query[1];

                  // Update maxBea by iterating through items whose price <= current query value
                  while (j < items.length && items[j][0] <= q) {
                        // Update maxBea to the max beauty seen so far
                        maxBea = Math.max(maxBea, items[j][1]);
                        // Move to the next item
                        j++;
                  }

                  // Step 5: Assign the maximum beauty value found for the query at the original
                  // index
                  answer[i] = maxBea;
            }

            // Step 6: Return the array of answers corresponding to each query
            return answer;
      }
}
