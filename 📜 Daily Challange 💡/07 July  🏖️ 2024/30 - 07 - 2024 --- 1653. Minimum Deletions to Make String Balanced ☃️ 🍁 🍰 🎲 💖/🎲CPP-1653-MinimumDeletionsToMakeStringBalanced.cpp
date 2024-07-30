//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1653

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = Length of s

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
      int minimumDeletions(string s) {
            // We can predict the 'a' to the right side in O(n)
            // So we will count total 'a' in str and go linear wise
            // When we got 'a' we delete it from total 
            // So that number of 'a' will be right side of that character

            int a_right_count = 0;

            for (char ch : s) {
                  // Count total 'a' in string
                  a_right_count += (ch == 'a') ? 1 : 0;
            }

            // Count of 'b' will increase if we got 'b' in our way
            int b_left_count = 0;
            // Assign it with max possible deletion
            int deletions = s.length();

            for (char ch : s) {
                  // Our 'a' count will decrease by 1 if we got 'a'
                  a_right_count -= (ch == 'a') ? 1 : 0;

                  // Deletion will be No. of 'b' remain in left + No. of 'a' remain in right
                  // Take the minimum of this deletion with our result
                  // # thisDeletion = a_right_count + b_left_count
                  deletions = min(deletions, a_right_count + b_left_count);

                  // Our 'b' count will increase by 1 if we got 'b'
                  b_left_count += (ch == 'b') ? 1 : 0;
            }

            return deletions;
      }
};


