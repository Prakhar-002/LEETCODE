//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1894

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(chalk)

//? 🧺 Space complexity ➺ O(1)

import java.util.Arrays;

class Solution {
      // `k : initialChalkPieces`: An integer that represents an initial amount of chalk
      public int chalkReplacer(int[] chalk, int k) {
            // calculating the total amount of chalk needed
            // for one complete round through all students
            long totalChalkNeeded = Arrays.stream(chalk).asLongStream().sum();

            // calculates the remaining chalk after completing as many full rounds as possible
            long remainingChalk = k % totalChalkNeeded;

            // iterates over each student
            for (int studentIndex = 0; studentIndex < chalk.length; studentIndex++) {
                  int studentChalkUse = chalk[studentIndex];
                  // this means the current student is the one
                  // who cannot complete their problem due to insufficient chalk
                  if (remainingChalk < studentChalkUse) {
                        // the loop ends by returning the student's index
                        return studentIndex;
                  }

                  // student has enough chalk to finish their problem
                  remainingChalk -= studentChalkUse; // subtracts the student's chalk usage
            }

            // This line should never be reached if the input is valid
            return -1;
      }
}
