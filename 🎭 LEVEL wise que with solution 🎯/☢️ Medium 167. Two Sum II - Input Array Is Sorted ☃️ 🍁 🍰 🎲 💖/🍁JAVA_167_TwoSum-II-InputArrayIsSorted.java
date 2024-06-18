class Solution {
      public int[] twoSum(int[] numbers, int target) {
            // taking to pointer a star with 0 and end
            int first = 0;
            int second = numbers.length - 1;

            // While first <= second
            while (first <= second) {
                  // Calculating sum
                  int sum = numbers[first] + numbers[second];
                  // If it is equal to target break
                  if (sum == target) {
                        break;
                  // If sum is greater than target shift second pointer to left
                  } else if (sum > target) {
                        second--;
                  // If sum is smaller than target shift first pointer to right
                  } else {
                        first++;
                  }
            }

            // return array of both index + 1
            return new int[] { first + 1, second + 1 };
      }
}