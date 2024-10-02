//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1467

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(k)

class Solution {
      public boolean canArrange(int[] arr, int k) {
            // `freq` is declared to store frequencies of remainders 
            // when elements of `arr` are divided by `k`
            int freq[] = new int[k];

            // for each number in `arr` 
            for (int num : arr) {
                  // calculate its `remainder` when divided by `
                  int rem = num % k;

                  // If the remainder is negative
                  if (rem < 0) {
                        // adds `k` to make the remainder non-negative
                        rem += k;
                  }

                  // inc the freq of rem
                  freq[rem]++;
            }

            // if the frequency of numbers whose remainder is zero 
            // when divided by `k` is even and it's impossible to pair them all up
            if (freq[0] % 2 != 0) {
                  // so we return false
                  return false;
            }

            // Next, for each `i` from 1 to `k/2`
            for (int i = 1; i <= k / 2; i++) {
                  // if the frequency of the `i-th` remainder (`freq[i]`) 
                  // matches the frequency of the `k-i` remainder (`freq[k - i]`)
                  if (freq[i] != freq[k - i]) {
                        // returns `false`
                        return false;
                  }
            }

            // If all checks pass return `true`
            return true;
      }
}
