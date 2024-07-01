//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1550

//? ⌚ Time complexity -> O(n) 👉 length of array

//? 🧺 Space complexity -> O(1)  

class Solution {
      public boolean threeConsecutiveOdds(int[] arr) {
            if (arr.length < 3) {
                  return false;
            }

            int odds = 0;

            for (int n : arr) {
                  // if we get odd inc our odd count
                  if (n % 2 != 0) {
                        odds++;
                        // if odd is 3 return tree
                        if (odds >= 3) {
                              return true;
                        }
                  } 
                  // if we hit one even odd count will 0
                  else {
                        odds = 0;
                  }
            }

            return odds >= 3;
      }
}
