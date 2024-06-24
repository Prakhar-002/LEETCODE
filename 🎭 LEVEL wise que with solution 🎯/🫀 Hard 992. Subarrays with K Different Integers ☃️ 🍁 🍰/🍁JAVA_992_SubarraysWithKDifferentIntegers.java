//! https://github.com/Prakhar-002/LEETCODE

import java.util.*;

class Solution {
      public int subarraysWithKDistinct(int[] nums, int k) {
            // Three pointer sliding window approach
            int left = 0, middle = 0, subArray = 0;
            // Making a hashSet to store number and count
            HashMap<Integer, Integer> countMap = new HashMap<>();

            // Third pointer start from 0 to len
            for (int right = 0; right < nums.length; right++) {
                  // add to our hash that number
                  countMap.put(nums[right], countMap.getOrDefault(nums[right], 0) + 1);

                  // If number of distinct element in our hash is greater then k 
                  // (cause we want subArray with k distinct number) 
                  while (countMap.size() > k) {
                        // We'll update our middle pointer 
                        // and by updating pointer we'll update the hash by dec count of that number
                        countMap.put(nums[middle], countMap.get(nums[middle]) - 1);
                        // If count is 0 for one number we'll delete that number from our hash
                        if (countMap.get(nums[middle]) == 0) {
                              countMap.remove(nums[middle]);
                        }
                        // update middle 
                        middle++;
                        //  update left pointer by middle cause we don't need that more
                        left = middle;
                  }

                  // if we get count greater than 1 for middle pointer value
                  while (countMap.get(nums[middle]) > 1) {
                        // so that means if we leave that elem after that we can possibly make an array with distinct k elem
                        countMap.put(nums[middle], countMap.get(nums[middle]) - 1);
                        middle++;
                  }

                  // If we get k distinct elem so we can make total array by that big array will be =>
                  if (countMap.size() == k) {
                        // mid - left + 1
                        subArray += (middle - left) + 1;
                  }
            }

            return subArray;
      }
}