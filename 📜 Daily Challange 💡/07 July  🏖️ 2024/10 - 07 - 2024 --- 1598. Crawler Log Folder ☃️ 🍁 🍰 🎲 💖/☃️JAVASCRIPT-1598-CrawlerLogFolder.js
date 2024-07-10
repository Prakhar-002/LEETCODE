//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1598

//? ⌚ Time complexity -> O(n) 👉 Traversing logs 

//? 🧺 Space complexity -> O(1) 

var minOperations = function (logs) {
      let crawler = 0;

      // Traverse whole logs
      for (const log of logs) {

            // if "./" be in same directory
            if (log === "./") {
                  continue;
            }

            // if "../" move to our parent directory we dec our level
            else if (log === "../") {
                  crawler = Math.max(crawler - 1, 0);
            }

            // else go to child directory we inc our level
            else {
                  crawler++;
            }
      }

      return crawler;
};