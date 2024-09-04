//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 874

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(commands)

//? 🧺 Space complexity ➺ O(m)   👉🏻   m = len(obstacles)

/**
* @param {number[]} commands - A list of integers representing commands for the robot
* @param {number[][]} obstacles - A list of lists of integers, each representing the coordinates of an obstacle
* @return {number}
*/

var robotSim = function (commands, obstacles) {
      // `x` and `y` are initialized to `0`, representing the starting coordinates of the robot
      let x = 0, y = 0;
      // `direction` is an array that represents the direction vectors for North, East, South, and West, respectively
      const direction = [[0, 1], [1, 0], [0, -1], [-1, 0]];

      // `d` is initialized to `0`, pointing to the initial direction (North) from the `direction` array
      let d = 0;
      // `distance` is initialized to `0`, this will record the maximum distance reached
      let distance = 0;

      // Convert the list of lists `obstacles` into a Set of strings for faster lookup
      const obstacleSet = new Set(obstacles.map(o => o.join(',')));

      for (let c of commands) {
            // `c === -1` changes the direction to the right
            if (c === -1) {
                  d = (d + 1) % 4;
                  // `c === -2` changes the direction to the left
            } else if (c === -2) {
                  d = (d - 1 + 4) % 4;
                  // if not `-1` or `-2`, the robot needs to move forward
            } else {
                  // `dx, dy` are set to the current direction vectors
                  const [dx, dy] = direction[d];
                  // loop runs `c` times, moving the robot forward step by step
                  for (let i = 0; i < c; i++) {
                        const nextX = x + dx;
                        const nextY = y + dy;
                        // if the next position `(nextX, nextY)` contains an obstacle
                        if (obstacleSet.has(`${nextX},${nextY}`)) {
                              // the robot stops
                              break;
                        }
                        // Otherwise, the robot updates its position `x` and `y`
                        x = nextX;
                        y = nextY;
                  }
            }
            // updates `distance` to the maximum value encountered
            distance = Math.max(distance, x * x + y * y);
      }

      // Return the maximum Euclidean distance
      return distance;
};

