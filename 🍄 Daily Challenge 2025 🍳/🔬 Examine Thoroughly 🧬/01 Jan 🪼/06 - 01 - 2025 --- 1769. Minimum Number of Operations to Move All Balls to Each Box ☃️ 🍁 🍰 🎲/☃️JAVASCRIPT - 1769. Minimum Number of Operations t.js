//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1769

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(boxes)

//? 🧺 Space complexity ➺ O(1)

var minOperations = function (boxes) {
      const n = boxes.length;  // Length of the string representing the boxes
      const answer = new Array(n).fill(0);  // Initialize the answer array with zeros

      // First pass: Calculate the moves needed to gather all balls to the left side
      let bolls = 0, moves = 0;  // Initialize the number of balls and moves to zero
      for (let i = 0; i < n; i++) {
            answer[i] = bolls + moves;  // The answer for the current box is the total moves so far
            moves += bolls;  // Update moves for the next iteration
            bolls += parseInt(boxes[i]);  // Convert '1' to 1 if a ball exists, else add 0
      }

      // Second pass: Calculate the moves needed to gather all balls to the right side
      bolls = 0;
      moves = 0;  // Reset the number of balls and moves to zero
      for (let i = n - 1; i >= 0; i--) {
            answer[i] += bolls + moves;  // Add the moves from the right side to the current box
            moves += bolls;  // Update moves for the next iteration
            bolls += parseInt(boxes[i]);  // Convert '1' to 1 if a ball exists, else add 0
      }

      return answer;  // Return the final answer array
}