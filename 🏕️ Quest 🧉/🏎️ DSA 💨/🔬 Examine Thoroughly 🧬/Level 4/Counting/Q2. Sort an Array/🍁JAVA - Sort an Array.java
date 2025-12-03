//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 912

//? ⌚ Time complexity -> O(n) 👉🏻 nums length

//? 🧺 Space complexity -> O(m) 👉🏻 m = max - min

class Solution {
      public int[] sortArray(int[] nums) {
            // let 0th idx val is max and min
            int max = nums[0];
            int min = nums[0];

            for (int num : nums) {
                  // find the max from array
                  max = Math.max(max, num);
                  // find the min from array
                  min = Math.min(min, num);
            }

            // get the length of our new array
            int n = max - min;
            // make the array of out length (n)which will be used to
            // store the frequency of each integer value in `nums`.
            int[] arr = new int[n + 1];

            for (int num : nums) {
                  // count the freq of nums's elem
                  arr[num - min]++;
            }

            int idx = 0;

            // This is where the actual sorting happens.
            // `idx` is an index pointer for updating the input array `nums`.
            // The outer loop iterates through each possible value in the range between
            // `min` and `max`.
            // The inner while loop runs as long as there are still occurrences (`arr[i] >
            // 0`) of the current number (`min`).
            // Each time, it assigns the number `min` to `nums[idx]` and increments `idx`.
            // It also decrements the frequency count `arr[i]`.
            // After exhausting the occurrences of `min`, the value of `min` is incremented
            // to move to the next number.

            // go through the whole array
            for (int i = 0; i <= n; i++) {
                  // up to freq of each elem of our array
                  while (arr[i] > 0) {
                        // assign the value
                        nums[idx++] = min;
                        // dec freq
                        arr[i]--;
                  }

                  // inc the value
                  min++;
            }

            // return new array
            return nums;
      }
}