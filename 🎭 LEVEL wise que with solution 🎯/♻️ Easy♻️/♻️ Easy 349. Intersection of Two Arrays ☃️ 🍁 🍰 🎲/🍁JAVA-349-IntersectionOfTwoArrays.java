//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 349

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(n) 👉 using HashSet

import java.util.*;

class Solution {
      public int[] intersection(int[] nums1, int[] nums2) {
            ArrayList<Integer> res = new ArrayList<>(); 
            // making hash set of first array
            Set<Integer> firstSet = new HashSet<>();

            // adding elem 
            for (int n : nums1) {
                  firstSet.add(n);
            }

            // traversing second array
            for (int n : nums2) {
                  //if elem of 2nd array in the first array set
                  if (firstSet.contains(n)) {
                        // add to our res 
                        res.add(n);
                        // and delete the element from set cause we don't want repeat elem
                        firstSet.remove(n);
                  }
            }

            // converting arrayList to arr
            int[] resArr = new int[res.size()];
            for (int i = 0; i < resArr.length; i++) {
                  resArr[i] = res.get(i);
            }

            return resArr;
      }
}