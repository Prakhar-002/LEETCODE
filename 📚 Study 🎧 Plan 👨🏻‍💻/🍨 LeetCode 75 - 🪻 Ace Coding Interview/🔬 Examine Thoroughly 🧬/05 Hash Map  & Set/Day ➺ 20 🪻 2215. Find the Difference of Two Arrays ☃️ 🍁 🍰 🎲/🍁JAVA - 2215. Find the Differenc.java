//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2215

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums) n1 = unique in nums1

//? 🧺 Space complexity ➺ O(n1, n2)  -> m = len(nums) n2 = unique in nums2

import java.util.*;

class Solution {
      public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
            // Create sets to store unique elements from both arrays
            HashSet<Integer> nums1Set = new HashSet<>();
            HashSet<Integer> nums2Set = new HashSet<>();

            // Add all elements of nums1 to nums1Set
            for (int num : nums1) {
                  nums1Set.add(num);
            }

            // Add all elements of nums2 to nums2Set
            for (int num : nums2) {
                  nums2Set.add(num);
            }

            // Create the result list
            List<List<Integer>> result = new ArrayList<>();

            // Find elements unique to nums1
            List<Integer> uniqueToNums1 = new ArrayList<>();
            for (Integer num : nums1Set) {
                  if (!nums2Set.contains(num)) {
                        uniqueToNums1.add(num);
                  }
            }

            // Add unique elements from nums1 to the result
            result.add(uniqueToNums1);

            // Find elements unique to nums2
            List<Integer> uniqueToNums2 = new ArrayList<>();
            for (Integer num : nums2Set) {
                  if (!nums1Set.contains(num)) {
                        uniqueToNums2.add(num);
                  }
            }

            // Add unique elements from nums2 to the result
            result.add(uniqueToNums2);

            // Return the final list of unique elements
            return result;
      }
}
