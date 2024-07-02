//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 350

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(n) 👉 using HashMap

import java.util.*; 

public class Solution {
      public int[] intersect(int[] nums1, int[] nums2) {
            // creating map of first array for num : freq
            Map<Integer, Integer> mp = new HashMap<>();

            for (int n : nums1) {
                  mp.put(n, mp.getOrDefault(n, 0) + 1);
            }

            List<Integer> resList = new ArrayList<>();

            // traverse 2nd array
            for (int n : nums2) {
                  // if n is contained in map
                  if (mp.containsKey(n) && mp.get(n) > 0) {
                        // add it to our array resList
                        resList.add(n);
                        // dec the freq of n from map
                        mp.put(n, mp.get(n) - 1);
                  }
            }

            // Convert List<Integer> to int[]
            return resList.stream().mapToInt(Integer::intValue).toArray();
      }
}
