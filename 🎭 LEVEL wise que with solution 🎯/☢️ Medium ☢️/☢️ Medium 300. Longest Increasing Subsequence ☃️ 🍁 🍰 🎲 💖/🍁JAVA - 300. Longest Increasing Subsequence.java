//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 300

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(len(res))

class Solution {
      public int lengthOfLIS(int[] nums) {
            List<Integer> lis = new ArrayList<>(); // Stores tails of potential LIS

            for (int num : nums) {
                  if (lis.isEmpty() || num > lis.get(lis.size() - 1)) {
                        lis.add(num); // Current number extends the LIS
                  } else {
                        int idx = binarySearch(lis, num); // Find position to replace
                        lis.set(idx, num); // Replace to maintain minimal tail values
                  }
            }

            return lis.size(); // The length of lis is the length of the LIS
      }

      // Binary search to find the index where current num should go
      private int binarySearch(List<Integer> arr, int target) {
            int left = 0, right = arr.size() - 1;
            while (left <= right) {
                  int mid = (left + right) / 2;
                  if (arr.get(mid) == target)
                        return mid;
                  else if (arr.get(mid) > target)
                        right = mid - 1;
                  else
                        left = mid + 1;
            }

            return left; // Return insert/replace position
      }
}
