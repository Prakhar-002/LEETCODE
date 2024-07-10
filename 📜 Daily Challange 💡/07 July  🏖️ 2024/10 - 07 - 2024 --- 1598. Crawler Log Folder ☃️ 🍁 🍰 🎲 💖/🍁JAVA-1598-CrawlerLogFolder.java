//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1598

//? ⌚ Time complexity -> O(n) 👉 Traversing logs 

//? 🧺 Space complexity -> O(1) 

class Solution {
      public int minOperations(String[] logs) {
            int crawler = 0;

            // Traverse whole logs
            for (String log : logs) {
                  // if "./" be in same directory
                  if (log.equals("./")) {
                        continue;
                  }
                  // if "../" move to our parent directory we dec our level
                  else if (log.equals("../")) {
                        crawler = Math.max(crawler - 1, 0);
                  }
                  // else go to child directory we inc our level
                  else {
                        crawler++;
                  }
            }

            return crawler;
      }
}