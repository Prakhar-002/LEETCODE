//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 649

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(senate)

//? 🧺 Space complexity ➺ O(n)

import java.util.LinkedList;
import java.util.Queue;

class Solution {
      public String predictPartyVictory(String senate) {
            Queue<Integer> radiant = new LinkedList<>();
            Queue<Integer> dire = new LinkedList<>();

            // Populate the queues with indices of Radiant and Dire senators
            for (int i = 0; i < senate.length(); i++) {
                  if (senate.charAt(i) == 'R') {
                        radiant.add(i);
                  } else {
                        dire.add(i);
                  }
            }

            // Process the queues
            while (!radiant.isEmpty() && !dire.isEmpty()) {
                  int r = radiant.poll();
                  int d = dire.poll();

                  // The senator with the smaller index survives
                  if (r < d) {
                        radiant.add(r + senate.length());
                  } else {
                        dire.add(d + senate.length());
                  }
            }

            // Return the winner
            return radiant.isEmpty() ? "Dire" : "Radiant";
      }
}
