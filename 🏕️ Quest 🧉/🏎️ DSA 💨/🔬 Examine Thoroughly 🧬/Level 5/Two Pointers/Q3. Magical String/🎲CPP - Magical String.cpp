//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q3

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
public:
      int magicalString(int n) {
            vector<int> s = {1, 2, 2};
            int i = 2;
            int one = 1;  // count of 1s initially

            while ((int)s.size() < n) {
                  int count = s[i];
                  int last = s.back();
                  int numToAdd = 3 - last;  // flip 1 to 2 or 2 to 1

                  for (int j = 0; j < count; j++) {
                        s.push_back(numToAdd);
                  }

                  i++;
            }

            // Count number of 1s in first n elements
            one = 0;
            for (int j = 0; j < n; j++) {
                  if (s[j] == 1) one++;
            }
            return one;
      }
};
