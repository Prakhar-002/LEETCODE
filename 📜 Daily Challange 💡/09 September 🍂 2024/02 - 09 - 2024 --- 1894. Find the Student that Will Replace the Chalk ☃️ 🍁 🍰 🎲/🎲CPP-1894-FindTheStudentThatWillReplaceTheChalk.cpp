//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1894

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(chalk)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
      // `k : initialChalkPieces`: An integer that represents an initial amount of chalk
      int chalkReplacer(vector<int>& chalk, int k) {
            // Calculate the total amount of chalk needed for one complete round
            long long totalChalkNeeded = accumulate(chalk.begin(), chalk.end(), 0LL);

            // Calculate the remaining chalk after completing as many full rounds as possible
            long long remainingChalk = k % totalChalkNeeded;

            // Iterate over each student
            for (int studentIndex = 0; studentIndex < chalk.size(); ++studentIndex) {
                  // this means the current student is the one
                  // who cannot complete their problem due to insufficient chalk
                  if (remainingChalk < chalk[studentIndex]) {
                        // the loop ends by returning the student's index
                        return studentIndex;
                  }

                  // student has enough chalk to finish their problem
                  remainingChalk -= chalk[studentIndex]; // subtracts the student's chalk usage
            }

            // This line should never be reached if the input is valid
            return -1;
      }
};

