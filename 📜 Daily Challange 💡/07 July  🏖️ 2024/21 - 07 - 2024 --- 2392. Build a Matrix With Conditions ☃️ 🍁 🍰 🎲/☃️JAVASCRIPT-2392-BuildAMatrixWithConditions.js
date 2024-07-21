//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2392

//? ⌚ Time complexity -> O(K ^ 2) 👉 Given 

//? 🧺 Space complexity -> O(K ^ 2) 👉 Making output Matrix

var buildMatrix = function (k, rowConditions, colConditions) {
      // for detecting the cycle and finding the order
      function dfs(src, adjacency, visit, path, order) {
            // if src is already in our path return false
            // cause this will make cycle on our graph
            if (path.has(src)) {
                  return false;
            }

            // if we already visited our src return false
            if (visit.has(src)) {
                  return true;
            }

            // we did not visit our src till now
            // add to visit and path
            visit.add(src);
            path.add(src);

            // call dfs for every Neighbor of our source node
            for (let neighbor of adjacency[src]) {
                  // calling dfs and if we got false somewhere return false
                  if (!dfs(neighbor, adjacency, visit, path, order)) {
                        return false;
                  }
            }

            // remove src from path cause we backward now
            path.delete(src);
            // append in our order
            order.push(src);

            return true;
      }

      // topological sort
      function topologicalSort(edges) {
            // first make adjacency list for edges
            let adjacency = {};
            for (let i = 1; i <= k; i++) {
                  adjacency[i] = [];
            }
            for (let [src, dest] of edges) {
                  // in the src append the dest
                  // make a hashmap for src : every dest(all Neighbor of src)
                  adjacency[src].push(dest);
            }

            // make two HashSet
            let visit = new Set(), path = new Set();

            // array that will tells us the actual position
            // where we can put our k elem in rowWise and colWise
            let order = [];

            // we will run dfs for every src(for whole graph) we have
            for (let src = 1; src <= k; src++) {
                  // run dfs for every val 1 to k
                  // if we got invalid condition like cycle
                  // we will return empty list as per que description
                  if (!dfs(src, adjacency, visit, path, order)) {
                        return [];
                  }
            }

            // if every this is okay then return the rev of our order
            return order.reverse();
      }

      // get the actual order of row and column for value 1 to k
      let rowOrder = topologicalSort(rowConditions);
      let colOrder = topologicalSort(colConditions);

      // if we got an empty order then we got a cycle
      if (rowOrder.length === 0 || colOrder.length === 0) {
            // so return empty array as per que
            return [];
      }

      // make the hashMap for row order and column order
      // for less complexity to find the exact position
      // map number to it's index
      let rowOrderMap = {};
      let colOrderMap = {};
      rowOrder.forEach((n, i) => rowOrderMap[n] = i);
      colOrder.forEach((n, i) => colOrderMap[n] = i);

      let matrix = Array.from({ length: k }, () => Array(k).fill(0));

      for (let num = 1; num <= k; num++) {
            // find the exact position of our number
            let row = rowOrderMap[num], col = colOrderMap[num];
            // assign it in our matrix
            matrix[row][col] = num;
      }

      return matrix;
};