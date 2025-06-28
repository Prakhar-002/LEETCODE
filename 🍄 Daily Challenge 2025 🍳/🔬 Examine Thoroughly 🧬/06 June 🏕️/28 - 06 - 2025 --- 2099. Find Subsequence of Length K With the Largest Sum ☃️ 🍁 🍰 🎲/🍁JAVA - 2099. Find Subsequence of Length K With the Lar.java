//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2099

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int[] maxSubsequence(int[] nums, int k) {
            int n = nums.length;

            // Step 1: Pair each number with its original index
            int[][] pairs = new int[n][2];
            for (int i = 0; i < n; i++) {
                  pairs[i][0] = i; // index
                  pairs[i][1] = nums[i]; // value
            }

            // Step 2: Sort pairs by value in descending order
            Arrays.sort(pairs, (a, b) -> Integer.compare(b[1], a[1]));

            // Step 3: Keep top-k largest elements
            int[][] topK = Arrays.copyOfRange(pairs, 0, k);

            // Step 4: Sort topK by original index to maintain subsequence order
            Arrays.sort(topK, Comparator.comparingInt(a -> a[0]));

            // Step 5: Extract values from sorted topK
            int[] res = new int[k];
            for (int i = 0; i < k; i++) {
                  res[i] = topK[i][1];
            }

            return res;
      }
}
