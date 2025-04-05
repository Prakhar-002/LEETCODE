//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1863

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

int subsetXORSum(int* nums, int numsSize) {
      // Store the bitwise OR of all elements
      int xorSum = 0;

      for (int i = 0; i < numsSize; i++) {
            xorSum |= nums[i];
      }

      // Total subset XOR sum = xorSum * 2^(numsSize - 1)
      return xorSum * (1 << (numsSize - 1));
}
