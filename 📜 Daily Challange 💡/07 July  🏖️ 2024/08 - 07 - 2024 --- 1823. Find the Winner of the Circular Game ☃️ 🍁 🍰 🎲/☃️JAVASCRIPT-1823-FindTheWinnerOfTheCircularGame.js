//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1823

//? ⌚ Time complexity -> O(n * k) 👉 Given

//? 🧺 Space complexity -> O(n) 👉 Using a dequeue

var findTheWinner = function (n, k) {
      // for circle we add remove at last and remove from first
      let q = [];

      // first add our n friends goes from 1 to n
      for (let i = 1; i <= n; i++) {
            q.push(i);
      }

      while (q.length > 1) {
            // first count upto k - 1 and add them queue 
            for (let i = 0; i < k - 1; i++) {
                  // we shift from front and add our friend to back 
                  q.push(q.shift());
            }

            // remove the Kth friend from queue
            q.shift();
      }

      // return the winner
      return q[0];
}

// -------------------------------------------------------------

// * Better approach -> "Recursion" 💡

// ? ⌚ Time complexity -> O(n) 👉 Given

// ? 🧺 Space complexity -> O(n) 👉 Using recursion

var findTheWinner = function (n, k) {
      function winner(n, k) {
            // base case if 1 elem is remain 0 will be It's index
            if (n === 1) {
                  return 0;
            }

            // call for n - 1 people with plus k and have a mod for circular
            return (winner(n - 1, k) + k) % n;
      }

      // find the index and return the our friend number 
      return winner(n, k) + 1;
};

// * Better approach -> "Recursion Two Line" 💡

var findTheWinner = function (n, k) {
      if (n === 1) {
            return 1;
      } else {
            // recursion
            return ((findTheWinner(n - 1, k) + k - 1) % n) + 1;
      }
}

// -------------------------------------------------------------

// * Best approach "Constant Space" 💡

// ? ⌚ Time complexity -> O(n) 👉 Given

// ? 🧺 Space complexity -> O(1)

var findTheWinner = function (n, k) {
      let winnerIdx = 0;

      for (let people = 1; people <= n; people++) {
            winnerIdx = (winnerIdx + k) % people;
      }

      return winnerIdx + 1;
}