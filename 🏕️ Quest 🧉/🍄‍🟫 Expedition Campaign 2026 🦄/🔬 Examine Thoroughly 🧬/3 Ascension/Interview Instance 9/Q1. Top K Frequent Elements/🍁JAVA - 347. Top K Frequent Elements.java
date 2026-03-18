//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 347

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] topKFrequent(int[] nums, int k) {
            // Step 1: Count the frequency of each number using a HashMap
            Map<Integer, Integer> count = new HashMap<>();
            for (int num : nums) {
                  count.put(num, count.getOrDefault(num, 0) + 1);
            }

            // Step 2: Create a frequency bucket (list of lists)
            List<Integer>[] freq = new List[nums.length + 1];
            for (int i = 0; i < freq.length; i++) {
                  freq[i] = new ArrayList<>();
            }

            // Step 3: Fill the frequency bucket with numbers corresponding to their frequencies
            for (Map.Entry<Integer, Integer> entry : count.entrySet()) {
                  int num = entry.getKey();
                  int cnt = entry.getValue();
                  freq[cnt].add(num);
            }

            // Step 4: Prepare the result array
            int[] res = new int[k];
            int index = 0;

            // Step 5: Iterate through the frequency bucket in reverse order (high to low frequency)
            for (int i = freq.length - 1; i > 0; i--) {
                  for (int num : freq[i]) {
                        res[index++] = num;
                        // Stop when we have collected `k` elements
                        if (index == k) {
                              return res;
                        }
                  }
            }

            return res;
      }
}
