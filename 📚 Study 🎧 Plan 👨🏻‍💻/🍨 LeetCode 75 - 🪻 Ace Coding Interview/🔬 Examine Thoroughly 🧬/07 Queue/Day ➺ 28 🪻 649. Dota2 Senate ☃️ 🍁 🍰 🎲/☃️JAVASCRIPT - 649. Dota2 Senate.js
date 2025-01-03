//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 649

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(senate)

//? 🧺 Space complexity ➺ O(n)

var predictPartyVictory = function (senate) {
      const radiant = [];
      const dire = [];

      // Populate the queues with indices of Radiant and Dire senators
      for (let i = 0; i < senate.length; i++) {
            if (senate[i] === 'R') {
                  radiant.push(i);
            } else {
                  dire.push(i);
            }
      }

      // Process the queues
      while (radiant.length && dire.length) {
            const r = radiant.shift();
            const d = dire.shift();

            // The senator with the smaller index survives
            if (r < d) {
                  radiant.push(r + senate.length);
            } else {
                  dire.push(d + senate.length);
            }
      }

      // Return the winner
      return radiant.length ? "Radiant" : "Dire";
}