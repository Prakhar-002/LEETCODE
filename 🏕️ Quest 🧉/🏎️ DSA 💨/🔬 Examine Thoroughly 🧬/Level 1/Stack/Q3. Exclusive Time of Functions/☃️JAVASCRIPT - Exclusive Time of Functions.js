//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q3

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

var exclusiveTime = function (n, logs) {
      const res = new Array(n).fill(0);  // Array to hold the exclusive time for each function
      const stack = [];                  // Stack to maintain function call order
      let prevTime = 0;                  // Previous timestamp

      for (const log of logs) {
            const [funcIdStr, type, timestampStr] = log.split(":");
            const funcId = parseInt(funcIdStr);
            const timestamp = parseInt(timestampStr);

            if (type === "start") {
                  // If a function is currently running, add elapsed time to it
                  if (stack.length > 0) {
                        res[stack[stack.length - 1]] += timestamp - prevTime;
                  }
                  stack.push(funcId);
                  prevTime = timestamp;
            } else {
                  // Function ends: accumulate elapsed time (+1)
                  res[stack.pop()] += timestamp - prevTime + 1;
                  prevTime = timestamp + 1;
            }
      }

      return res;
};
