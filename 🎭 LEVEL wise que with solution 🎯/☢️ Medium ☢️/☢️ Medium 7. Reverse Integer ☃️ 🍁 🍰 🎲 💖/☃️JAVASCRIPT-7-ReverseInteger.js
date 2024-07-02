//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 7

//? ⌚ Time complexity -> O(LogN) 👉 Number of digit in x

//? 🧺 Space complexity -> O(1) 

var reverse = function (x) {
      const num = Math.abs(x);
      let rev = 0n;
      let temp = BigInt(num);

      while (temp > 0n) {
            const pop = temp % 10n;
            temp = temp / 10n;
            rev = (rev * 10n) + pop;
      }

      // Check if the reversed number is within 32-bit integer range
      if (rev >= BigInt(-(2 ** 31)) && rev <= BigInt(2 ** 31 - 1)) {
            return x < 0 ? -Number(rev) : Number(rev);
      } else {
            return 0;
      }
};