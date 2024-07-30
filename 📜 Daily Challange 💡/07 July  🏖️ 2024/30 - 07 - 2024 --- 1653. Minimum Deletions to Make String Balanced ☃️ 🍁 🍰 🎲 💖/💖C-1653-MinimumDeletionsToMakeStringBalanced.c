//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1653

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = Length of s

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <string.h>

int minimumDeletions(char* s) {
      // we can predict the 'a' to the right side in O(n)
      // so we will count total 'a' in str and go linear wise
      // when we got 'a' we delete it from total 
      // so that number of 'a' will be right side of that character

      int a_right_count = 0;
      int strLength = strlen(s);

      // count total 'a' in string
      for (int i = 0; i < strLength; i++) {
            if (s[i] == 'a') {
                  a_right_count++;
            }
      }

      // count of 'b' will inc if we got 'b' in our way
      int b_left_count = 0;
      // assign it with max possible deletion
      int deletions = strLength;

      for (int i = 0; i < strLength; i++) {
            // our 'a' count will dec by 1 if we got 'a'
            if (s[i] == 'a') {
                  a_right_count--;
            }

            // deletion will be No. of 'b' remain in left + No. of 'a' remain in right
            // take the minimum of this deletion with our res
            // thisDeletion = a_right_count + b_left_count
            deletions = (deletions < (a_right_count + b_left_count)) ? deletions : (a_right_count + b_left_count);

            // our 'b' count will inc by 1 if we got 'b'
            if (s[i] == 'b') {
                  b_left_count++;
            }
      }

      return deletions;
}