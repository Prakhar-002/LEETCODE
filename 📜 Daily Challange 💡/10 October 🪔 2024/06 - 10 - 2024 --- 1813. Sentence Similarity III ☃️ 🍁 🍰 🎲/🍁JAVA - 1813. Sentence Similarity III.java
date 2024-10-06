//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1813

//? ⌚ Time complexity ➺ O(k) 👉🏻  k = min(n, m)

//? 🧺 Space complexity ➺ O(n + m) n = len(s1), m = len(s2)

class Solution {
      public boolean areSentencesSimilar(String sentence1, String sentence2) {
            // splitting each sentence into an array of words
            String[] s1 = sentence1.split(" ");
            String[] s2 = sentence2.split(" ");

            // ensures that `s2` is always equal to or longer than `s1`
            if (s2.length < s1.length) {
                  String[] temp = s1;
                  s1 = s2;
                  s2 = temp;
            }

            // initializes two pointers, `l1` and `l2`,
            // for the arrays `s1` and `s2` respectively (starting at 0)
            int l1 = 0, l2 = 0;
            // iterates both sentences as long as the words at the
            // current positions of `l1` and `l2` are the same
            while (l1 < s1.length && l2 < s2.length && s1[l1].equals(s2[l2])) {
                  // it increments both pointers
                  l1++;
                  l2++;
            }

            // initializes two more pointers, `r1` and `r2`, starting from the ends of `s1`
            // and `s2`
            int r1 = s1.length - 1, r2 = s2.length - 1;

            // iterates backwards as long as the words at the current positions of `r1` and
            // `r2` are the same
            while (r1 >= 0 && r2 >= 0 && s1[r1].equals(s2[r2])) {
                  // decreasing both `r1` and `r2` for each match
                  r1--;
                  r2--;
            }

            // returns `true` if the pointers `l1` and `r1` have "crossed"
            return l1 > r1;
      }
}
