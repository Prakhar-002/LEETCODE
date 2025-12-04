//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q3

//? ⌚ Time complexity ➺ O(n) 

//? 🧺 Space complexity ➺ O(n)

var magicalString = function (n) {
      // Initial magical string pattern
      const s = [1, 2, 2];
      let i = 2;       // Pointer to current position in s for count instruction
      let one = 1;     // count of 1s, starting with first element

      // Generate magical string until length >= n
      while (s.length < n) {
            const count = s[i];
            const last = s[s.length - 1];
            const numToAdd = 3 - last;  // Flip 1 <-> 2

            for (let j = 0; j < count; j++) {
                  s.push(numToAdd);
            }

            i++;
      }

      // Count number of 1's in first n elements
      one = 0;
      for (let k = 0; k < n; k++) {
            if (s[k] === 1) one++;
      }
      return one;
};
