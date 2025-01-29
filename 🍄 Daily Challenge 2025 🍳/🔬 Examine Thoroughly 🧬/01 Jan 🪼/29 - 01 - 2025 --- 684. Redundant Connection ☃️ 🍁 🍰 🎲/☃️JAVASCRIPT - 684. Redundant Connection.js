//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 684

//* Union find algorithm

//? ⌚ Time complexity -> O(n) 👉 length of edges array

//? 🧺 Space complexity -> O(n) 👉 using 2 arr of length equal to len of edges


// finding the parent of our node
var find = function (n, parent) { 
      // find it in our parent array
      let p = parent[n];

      while (p !== parent[p]) {
            // we'll update our parent of array value to parent of parent of p
            parent[p] = parent[parent[p]];
            // then check for new parent
            p = parent[p];
      }

      return p;
}

var union = function (firstNode, secNode, parent, rank) {
      // find parent of first node
      const firstNodeParent = find(firstNode, parent);
      // find parent of second node
      const secNodeParent = find(secNode, parent);

      // if they both have same parent so making an edge will give us a cycle
      if (firstNodeParent === secNodeParent) {
            // so in that case we return false and this will be our ans too
            return false;
      }

      // if rank of first parent is greater than other
      if (rank[firstNodeParent] > rank[secNodeParent]) {
            // then our parent node will be first one
            // and we'll update the parent of sec node to first node parent
            parent[secNodeParent] = firstNodeParent;
            // and node then rank of ultimate parent of first node...
            // ...will be inc by rank of ultimate parent of second node
            rank[firstNodeParent] += rank[secNodeParent];
      } else {
            // vice-versa
            parent[firstNodeParent] = secNodeParent;
            rank[secNodeParent] += rank[firstNodeParent];
      }

      return true;
}

var findRedundantConnection = function (edges) {
      // parent array will store ultimate parent of each node
      const parent = Array(edges.length + 1).fill().map((_, i) => i);
      // rank array will give the info about node which one of them will be parent
      // node among all
      const rank = Array(edges.length + 1).fill(1);

      for (const [firstNode, secNode] of edges) {
            // if we get false anywhere in whole edges array
            if (!union(firstNode, secNode, parent, rank)) {
                  // that will be our ans
                  return [firstNode, secNode];
            }
      }
      // just for missing return statement error 
      return edges[0];
};