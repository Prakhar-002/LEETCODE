//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3487

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int maxSum(int[] nums) {
            // Create a HashSet to store only positive integers (removes duplicates)
            Set<Integer> positiveNumsSet = new HashSet<>();

            // Iterate through the array and add positive numbers to the set
            for (int num : nums) {
                  if (num > 0) {
                        positiveNumsSet.add(num);
                  }
            }

            // If there are no positive numbers in the set, return the maximum value in the array
            if (positiveNumsSet.isEmpty()) {
                  return Arrays.stream(nums).max().getAsInt(); // getAsInt() retrieves the optional int value
            }

            // Otherwise, sum up all the unique positive integers and return the result
            return positiveNumsSet.stream().mapToInt(Integer::intValue).sum();
      }
}
