//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3622

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var sumGame = function(num) {
      let leftSum = 0;
      let rightSum = 0;
      let leftQue = 0;
      let rightQue = 0;
      const n = num.length;

      // Count digits and question marks across both halves
      for (let i = 0; i < n; i++) {
            const ch = num[i];
            if (i < Math.floor(n / 2)) {
                  if (ch === '?') {
                        leftQue++;
                  } else {
                        leftSum += Number(ch);
                  }
            } else {
                  if (ch === '?') {
                        rightQue++;
                  } else {
                        rightSum += Number(ch);
                  }
            }
      }

      // Alice always wins when total '?' count is odd
      if ((leftQue + rightQue) % 2 === 1) {
            return true;
      }

      // Check balance condition for Bob to draw/win
      const left = 2 * leftSum + 9 * leftQue;
      const right = 2 * rightSum + 9 * rightQue;

      return left !== right;
};