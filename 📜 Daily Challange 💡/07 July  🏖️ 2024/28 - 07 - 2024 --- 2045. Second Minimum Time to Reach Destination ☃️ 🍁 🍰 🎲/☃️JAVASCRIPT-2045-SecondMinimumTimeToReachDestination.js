//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2045

//? ⌚ Time complexity ➺ O(n + m) 👉🏻 n = No of cities,  m = No. of edges

//? 🧺 Space complexity ➺ O(n) 👉🏻 making adjacency list, deque of cities

var secondMinimum = function (n, edges, time, change) {
      // make adjacency list for all edges
      const adjacency = new Map();
      for (let i = 1; i <= n; i++) {
            adjacency.set(i, []);
      }

      for (const [cityOne, cityTwo] of edges) {
            // append cities to their neighbors
            adjacency.get(cityOne).push(cityTwo);
            adjacency.get(cityTwo).push(cityOne);
      }

      // for bfs
      const q = [1];
      // current time will tell us whether we are at green light or red light
      let curTime = 0;

      // isSecTime visit will ensure that we have the 2nd minimum time to reach dest
      let isSecTime = false;

      // this will ensure that every node is visited at most twice
      // and we store the time that have been visited before
      // and check for not to be same as before
      const visitedTimes = new Map();  // node -> [visit]

      while (q.length > 0) {
            const len = q.length;
            for (let i = 0; i < len; i++) {
                  const city = q.shift();
                  // if we are at our dest
                  if (city === n) {
                        // check for 2nd time visit
                        if (isSecTime) {
                              return curTime;
                        }
                        // else just set isSecTime to true
                        isSecTime = true;
                  }

                  // and if we are not at our dest then go for all neighbors of our city
                  for (const nei of adjacency.get(city)) {
                        const neiTime = visitedTimes.get(nei) || [];
                        // we are only allowed to add in our queue if this is at most 2nd time
                        // and previous visiting time is not same as current visiting time
                        if (neiTime.length === 0 || (neiTime.length === 1 && neiTime[0] !== curTime)) {
                              // then append in our queue
                              q.push(nei);
                              // and add this time to our visited times
                              neiTime.push(curTime);
                              visitedTimes.set(nei, neiTime);
                        }
                  }
            }

            // for every level we increment our current time
            // catch is here we can't just update the current time by time
            // see for whether it is a green light or red light
            if (Math.floor(curTime / change) % 2 === 1) {
                  // if it is odd then we will wait for signal to be green
                  curTime += change - (curTime % change);
            }

            // if the signal is already green then update current time by given time
            curTime += time;
      }
}