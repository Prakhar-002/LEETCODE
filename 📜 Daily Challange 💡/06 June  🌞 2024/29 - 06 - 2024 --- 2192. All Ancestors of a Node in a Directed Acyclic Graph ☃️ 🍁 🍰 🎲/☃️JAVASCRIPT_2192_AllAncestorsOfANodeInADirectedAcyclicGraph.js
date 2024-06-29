//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 2192

//? ⌚ Time complexity -> O(n^2) 👉 given

//? 🧺 Space complexity -> O(n) 👉 given

const dfs = function (graph, i, j, ancestors) {
      // get tha list of ancestors at index j mean that will be ancestors of our index i
      for (let g of graph[j]) {
            // checking if empty or last elem is not same elem 
            // means 0 is not the ancestor of 0
            if (!ancestors[g].length || ancestors[g][ancestors[g].length - 1] !== i) {
                  // push back into our array
                  ancestors[g].push(i);
                  // call for next element
                  dfs(graph, i, g, ancestors);
            }
      }
}

var getAncestors = function (n, edges) {
      let ancestors = Array.from({ length: n }, () => []);
      let graph = Array.from({ length: n }, () => []);

      // edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

      for (let edge of edges) { 
            graph[edge[0]].push(edge[1]);
      }

      //* graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

      // We call our function for every index o to N
      // call with our graph and index and index of list of ancestor
      // and our ans ancestors
      for (let i = 0; i < n; i++) {
            dfs(graph, i, i, ancestors);
      }

      return ancestors;
};