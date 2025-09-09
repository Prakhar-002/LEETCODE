//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1317

//? ⌚ Time complexity ➺ O(n log n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      vector<int> getNoZeroIntegers(int n) {
            //      Iterate over possible values for A from 1 to n-1
            for (int A = 1; A < n; ++A) {
                  int B = n - A;                         //      Calculate B so that A + B = n

                  //      Convert A and B to strings for digit check
                  string strA = to_string(A);
                  string strB = to_string(B);

                  //      Check whether both A and B have no '0' in their digits
                  if (strA.find('0') == string::npos &&
                        strB.find('0') == string::npos) {
                        return {A, B};                   //      Return the pair [A, B] if both are valid
                  }
            }
            return {};                                   //      Return empty vector if not found
      }
};