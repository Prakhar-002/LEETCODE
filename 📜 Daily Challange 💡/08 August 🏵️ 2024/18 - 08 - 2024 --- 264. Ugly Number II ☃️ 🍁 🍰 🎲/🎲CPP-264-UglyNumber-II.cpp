//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 264

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int nthUglyNumber(int n) {
            // initialized with `1` cause `1` is considered as the first ugly
            vector<int> ugliNum = {1};

            // pointers keep track of where we are in the list for the multiples of `2`, `3`, and `5` respectively
            int twoPointer = 0, threePointer = 0, fivePointer = 0;

            // loop runs from `1` to `n-1`, meant to generate the next `n-1` ugly numbers.
            for (int i = 1; i < n; ++i) {
                  // minimum value among
                  int nextUgli = min({
                        // cur smallest ugly number multiplied by `2`
                        ugliNum[twoPointer] * 2,
                        // cur smallest ugly number multiplied by `3`
                        ugliNum[threePointer] * 3,
                        // cur smallest ugly number multiplied by `5`
                        ugliNum[fivePointer] * 5
                  });

                  ugliNum.push_back(nextUgli);

                  // If `nextUgli` was derived from multiplying by `2`, the `twoPointer` is incremented
                  if (nextUgli == ugliNum[twoPointer] * 2) {
                        ++twoPointer;
                  }

                  // If `nextUgli` was derived from multiplying by `3`, the `threePointer` is incremented
                  if (nextUgli == ugliNum[threePointer] * 3) {
                        ++threePointer;
                  }

                  // If `nextUgli` was derived from multiplying by `5`, the `fivePointer` is incremented
                  if (nextUgli == ugliNum[fivePointer] * 5) {
                        ++fivePointer;
                  }
            }

            // returns the `n`th ugly number, which is at the `n-1` index
            return ugliNum[n - 1];
      }
};

