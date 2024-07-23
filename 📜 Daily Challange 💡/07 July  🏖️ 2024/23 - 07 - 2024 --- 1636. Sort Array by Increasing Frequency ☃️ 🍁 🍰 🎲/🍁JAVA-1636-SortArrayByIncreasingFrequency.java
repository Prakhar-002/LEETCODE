//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1636

//? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

//? 🧺 Space complexity -> O(n) 👉🏻 using freq count HashMap 

import java.util.*;

class Solution {
      public int[] frequencySort(int[] nums) {
            // count the freq of every num in nums
            Map<Integer, Integer> freqCount = new HashMap<>();
            for (int num : nums) {
                  freqCount.put(num, freqCount.getOrDefault(num, 0) + 1);
            }

            // Convert array to list for sorting
            List<Integer> numList = new ArrayList<>();
            for (int num : nums) {
                  numList.add(num);
            }

            // sort based on the freq of num
            // if freq is same then sort by dec order of num
            numList.sort((numOne, numTwo) -> {
                  int freqOne = freqCount.get(numOne);
                  int freqTwo = freqCount.get(numTwo);
                  if (freqOne != freqTwo) {
                        return Integer.compare(freqOne, freqTwo);
                  } else {
                        return Integer.compare(numTwo, numOne);
                  }
            });

            // Convert list back to array
            for (int i = 0; i < nums.length; i++) {
                  nums[i] = numList.get(i);
            }

            return nums;
      }
}