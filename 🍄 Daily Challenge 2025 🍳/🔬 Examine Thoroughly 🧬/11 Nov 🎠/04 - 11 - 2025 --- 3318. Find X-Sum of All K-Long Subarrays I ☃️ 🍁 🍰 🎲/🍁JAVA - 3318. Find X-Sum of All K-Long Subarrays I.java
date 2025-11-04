//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3318

//? ⌚ Time complexity ➺ O(k log k * (n - k + 1)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n - k + 1)

import java.util.*;

class Solution {
      /**
       * For each contiguous subarray of size k in nums,
       * find the sum of the top x frequent elements.
       * If distinct elements in the subarray are <= x,
       * sum all elements; otherwise, sum only top x frequent elements.
       *
       * @param nums input array of integers
       * @param k    size of subarray window
       * @param x    number of top frequent elements considered
       * @return array of sums for each subarray
       */
      public int[] findXSum(int[] nums, int k, int x) {
            int n = nums.length;
            int[] res = new int[n - k + 1]; // Result array to hold sums for each window

            // Iterate over all windows of size k
            for (int i = 0; i <= n - k; i++) {
                  Map<Integer, Integer> countMap = new HashMap<>();

                  // Count frequency of elements in current window
                  for (int j = i; j < i + k; j++) {
                        countMap.put(nums[j], countMap.getOrDefault(nums[j], 0) + 1);
                  }

                  // If number of distinct elements is at most x, sum entire window
                  if (countMap.size() <= x) {
                        int sum = 0;
                        for (int j = i; j < i + k; j++) {
                              sum += nums[j];
                        }
                        res[i] = sum;
                  } else {
                        // Otherwise, collect frequencies in a list for sorting
                        List<Map.Entry<Integer, Integer>> pairs = new ArrayList<>(countMap.entrySet());

                        // Sort entries by frequency descending, and by value descending for
                        // tie-breaking
                        pairs.sort((a, b) -> {
                              int freqCompare = Integer.compare(b.getValue(), a.getValue());
                              if (freqCompare == 0)
                                    return Integer.compare(b.getKey(), a.getKey());
                              return freqCompare;
                        });

                        int curSum = 0;
                        // Sum values times their counts for top x frequent elements
                        for (int j = 0; j < x; j++) {
                              Map.Entry<Integer, Integer> entry = pairs.get(j);
                              curSum += entry.getKey() * entry.getValue();
                        }
                        res[i] = curSum;
                  }
            }
            return res;
      }
}
