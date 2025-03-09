//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3206

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(colors)

// ? 🧺 Space complexity ➺ O(1)

const numberOfAlternatingGroups = function (colors) {
      let N = colors.length;
      let altGrp = 0;

      for (let i = 0; i < N; i++) {
            let next = (i + 1) % N;
            let nextNext = (i + 2) % N;

            // Ensure all three adjacent elements are distinct
            if (colors[i] !== colors[next] && colors[next] !== colors[nextNext]) {
                  altGrp++;
            }
      }

      return altGrp;
};
