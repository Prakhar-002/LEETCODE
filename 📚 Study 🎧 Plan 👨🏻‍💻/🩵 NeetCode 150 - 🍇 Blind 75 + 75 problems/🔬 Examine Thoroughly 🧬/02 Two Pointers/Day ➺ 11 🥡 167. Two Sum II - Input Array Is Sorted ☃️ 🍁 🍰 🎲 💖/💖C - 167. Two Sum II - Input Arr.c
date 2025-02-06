//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 167

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
      // taking to pointer a star with 0 and end
      int first = 0;
      int second = numbersSize - 1;

      // While first <= second
      while (first <= second) {
            // Calculating sum
            int sum = numbers[first] + numbers[second];
            // If it is equal to target break
            if (sum == target) {
                  *returnSize = 2;
                  int* result = (int*)malloc(2 * sizeof(int));
                  result[0] = first + 1;
                  result[1] = second + 1;
                  return result;
            // If sum is greater than target shift second pointer to left
            } else if (sum > target) {
                  second--;
            // If sum is smaller than target shift first pointer to right
            } else {
                  first++;
            }
      }

      *returnSize = 0;
      return NULL;
}