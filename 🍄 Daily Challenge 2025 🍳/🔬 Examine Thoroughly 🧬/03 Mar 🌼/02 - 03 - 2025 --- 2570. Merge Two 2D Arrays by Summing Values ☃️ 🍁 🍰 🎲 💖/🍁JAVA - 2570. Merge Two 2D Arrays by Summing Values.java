//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2570

// ? ⌚ Time complexity ➺ O(n + m + k log k) 👉🏻  n = len(nums1) m = len(nums2)

// ? 🧺 Space complexity ➺ O(n + m)          👉🏻 k = No.of unique Ids

import java.util.*;

class Solution {
      public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
            // Map to store the sum of values for each unique ID
            Map<Integer, Integer> idToSum = new HashMap<>();

            // Process first array and add values to the corresponding IDs
            for (int[] pair : nums1) {
                  int id = pair[0], value = pair[1];
                  idToSum.put(id, idToSum.getOrDefault(id, 0) + value);
            }

            // Process second array and add values to the corresponding IDs
            for (int[] pair : nums2) {
                  int id = pair[0], value = pair[1];
                  idToSum.put(id, idToSum.getOrDefault(id, 0) + value);
            }

            // Collect and sort the IDs
            List<Integer> sortedIds = new ArrayList<>(idToSum.keySet());
            Collections.sort(sortedIds);

            // Prepare the result array with correct dimensions
            int[][] mergedArray = new int[sortedIds.size()][2];

            // Fill the merged array with (id, sum) pairs
            for (int index = 0; index < sortedIds.size(); index++) {
                  int id = sortedIds.get(index);
                  mergedArray[index][0] = id;
                  mergedArray[index][1] = idToSum.get(id);
            }

            // Return the merged array as int[][]
            return mergedArray;
      }
}

//!----------------------------------------------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n + m)   👉🏻  n = len(nums1) 

// ? 🧺 Space complexity ➺ O(n + m)  👉🏻 m = len(nums2)

class Solution {
      public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
            // Lengths of both arrays
            int n = nums1.length, m = nums2.length;

            // Pointers for both arrays
            int i = 0, j = 0;

            // List to store the result (temporary)
            List<int[]> mergedList = new ArrayList<>();

            // Merge process using two-pointer technique
            while (i < n && j < m) {
                  if (nums1[i][0] == nums2[j][0]) {
                        // Same ID - add sum of values
                        mergedList.add(new int[] { nums1[i][0], nums1[i][1] + nums2[j][1] });
                        i++;
                        j++;
                  } else if (nums1[i][0] < nums2[j][0]) {
                        // nums1 ID is smaller - add nums1 directly
                        mergedList.add(nums1[i]);
                        i++;
                  } else {
                        // nums2 ID is smaller - add nums2 directly
                        mergedList.add(nums2[j]);
                        j++;
                  }
            }

            // Add remaining elements from nums1
            while (i < n) {
                  mergedList.add(nums1[i]);
                  i++;
            }

            // Add remaining elements from nums2
            while (j < m) {
                  mergedList.add(nums2[j]);
                  j++;
            }

            // Convert list to 2D array for result
            return mergedList.toArray(new int[mergedList.size()][]);
      }
}
