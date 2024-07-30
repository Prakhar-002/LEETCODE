//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1653

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = Length of s

//? 🧺 Space complexity ➺ O(1)

public class Solution {

      // Intuition is check for every character
      // can it be our point so that every value to left side is 'a'
      // and every value to right of it is 'b'

      // so we need number of 'b' to our left side of current char
      // and we need number of 'a' that are right side of our current char

      // so add them 'b' to the left and 'a' to the right
      // minimize this result for every character

      public int minimumDeletions(String s) {
            // we can predict the 'a' to the right side in O(n)
            // so we will count total 'a' in str and go linear wise
            // when we got 'a' we delete it from total
            // so that number of 'a' will be right side of that character

            int aRightCount = 0;

            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);
                  // count total 'a' in string
                  aRightCount += (ch == 'a') ? 1 : 0;
            }

            // count of 'b' will inc if we got 'b' in our way
            int bLeftCount = 0;
            // assign it with max possible deletion
            int deletions = s.length();

            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);
                  // our 'a' count will dec by 1 if we got 'a'
                  aRightCount -= (ch == 'a') ? 1 : 0;

                  // deletion will be No. of 'b' remain in left + No. of 'a' remain in right
                  // take the minimum of this deletion with our res
                  // thisDeletion = aRightCount + bLeftCount
                  deletions = Math.min(deletions, aRightCount + bLeftCount);

                  // our 'b' count will inc by 1 if we got 'b'
                  bLeftCount += (ch == 'b') ? 1 : 0;
            }

            return deletions;
      }
}
