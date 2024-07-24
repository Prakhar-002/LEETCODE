//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2191

//? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

//? 🧺 Space complexity -> O(n) 👉🏻 making pairs array

import java.util.*;

class Solution {
      public int[] sortJumbled(int[] mapping, int[] nums) {
            List<int[]> pairs = new ArrayList<>();

            // Go through the whole array
            for (int i = 0; i < nums.length; i++) {
                  int num = nums[i];
                  int mapNum = 0;
                  int base = 1;

                  // handle the case where num is 0
                  if (num == 0) {
                        mapNum = mapping[num];
                  }

                  // extract the num according to map array
                  while (num > 0) {
                        int digit = num % 10;
                        num /= 10;
                        mapNum += base * mapping[digit];
                        base *= 10;
                  }

                  // we got the mapNum and index of it
                  // we have to sort it based on the map Number
                  // if they are same then we will sort according to the index
                  pairs.add(new int[] { mapNum, i });
            }

            // this will sort by mapNum first and then according to idx
            pairs.sort((first, second) -> {
                  // based on num acc to mapped array
                  if (first[0] != second[0]) {
                        return Integer.compare(first[0], second[0]);
                  } else { // based on the index
                        return Integer.compare(first[1], second[1]);
                  }
            });

            // extract the real value by idx from nums
            int[] jumbledNum = new int[nums.length];
            for (int i = 0; i < pairs.size(); i++) {
                  jumbledNum[i] = nums[pairs.get(i)[1]];
            }

            return jumbledNum;
      }
}
