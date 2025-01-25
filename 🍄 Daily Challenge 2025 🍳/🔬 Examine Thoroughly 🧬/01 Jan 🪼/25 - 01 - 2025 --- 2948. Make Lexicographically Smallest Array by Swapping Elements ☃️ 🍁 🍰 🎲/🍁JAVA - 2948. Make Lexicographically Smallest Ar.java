//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2948

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] lexicographicallySmallestArray(int[] nums, int limit) {
            // List of queues to group elements
            List<Deque<Integer>> groups = new ArrayList<>();

            // Map to store each number's group index
            Map<Integer, Integer> numToGroup = new HashMap<>();

            // Create a copy of the original array and sort it
            int[] sortedNums = nums.clone();
            Arrays.sort(sortedNums);

            for (int n : sortedNums) {
                  // If no groups exist or the difference between the current
                  // number and the last number in the last group exceeds the limit,
                  // create a new group
                  if (groups.isEmpty() || Math.abs(n - groups.get(groups.size() - 1).peekLast()) > limit) {
                        groups.add(new ArrayDeque<>());
                  }

                  // Add the number to the current group
                  groups.get(groups.size() - 1).add(n);

                  // Store the group index for the number
                  numToGroup.put(n, groups.size() - 1);
            }

            // Initialize the result array
            int[] lexArr = new int[nums.length];

            // Iterate through the original array of numbers
            for (int i = 0; i < nums.length; i++) {
                  // Get the group index for the number
                  int n = nums[i];
                  int idx = numToGroup.get(n);

                  // Append the smallest available number from the group to the result
                  lexArr[i] = groups.get(idx).pollFirst();
            }

            // Return the lexicographically smallest array
            return lexArr;
      }
}
