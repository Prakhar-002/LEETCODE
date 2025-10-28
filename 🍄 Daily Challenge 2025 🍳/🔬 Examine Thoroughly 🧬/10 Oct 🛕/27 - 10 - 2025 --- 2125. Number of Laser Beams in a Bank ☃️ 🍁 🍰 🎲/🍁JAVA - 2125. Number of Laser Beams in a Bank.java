//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2125

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(bank)

//? 🧺 Space complexity ➺ O(1)   -> m = len(max(bank))

class Solution {
      public int numberOfBeams(String[] bank) {
            int beams = 0; // Total beams count
            int prev = 0; // Devices in previous nonempty row

            for (String s : bank) {
                  // Count devices in current row
                  int cam = 0;
                  for (char ch : s.toCharArray()) {
                        if (ch == '1')
                              cam++;
                  }
                  if (cam > 0) {
                        beams += prev * cam;
                        prev = cam;
                  }
            }
            return beams;
      }
}
