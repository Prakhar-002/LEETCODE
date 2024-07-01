//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1550

//? ⌚ Time complexity -> O(n) 👉 length of array

//? 🧺 Space complexity -> O(1) 

#include<vector>
using namespace std;

class Solution {
public:
      bool threeConsecutiveOdds(vector<int>& arr) {
            if (arr.size() < 3) {
                  return false;
            }

            int odds = 0;

            for (auto && n : arr) {
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
};