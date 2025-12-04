//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q3

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

public class Solution {
      public int magicalString(int n) {
            List<Integer> s = new ArrayList<>(Arrays.asList(1, 2, 2));
            int i = 2;
            int one = 1;  // count of '1's

            while (s.size() < n) {
                  int count = s.get(i);
                  int last = s.get(s.size() - 1);
                  int numToAdd = 3 - last;  // flip 1 <-> 2

                  for (int j = 0; j < count; j++) {
                        s.add(numToAdd);
                  }

                  i++;

                  // Count the 1s only after building the entire array for the requested length
            }

            // Count ones in the first n elements
            one = 0;
            for (int j = 0; j < n; j++) {
                  if (s.get(j) == 1) one++;
            }
            return one;
      }
}
