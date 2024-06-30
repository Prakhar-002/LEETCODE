//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1579

//? ⌚ Time complexity -> O(n) 👉 given 

//? 🧺 Space complexity -> O(n) 👉 for using array of n length

class UnionFind {
      constructor(n) {
            this.n = n;
            this.parent = Array.from({ length: n + 1 }, (_, i) => i);
            this.rank = new Array(n + 1).fill(1);
      }

      find(p) {
            while (p !== this.parent[p]) {
                  // we'll update our parent of array value tp parent of parent of p
                  this.parent[p] = this.parent[this.parent[p]];
                  // than check for new parent
                  p = this.parent[p];
            }
            return p;
      }

      union(firstNode, secNode) {
            // find parent of first node
            let firstNodeParent = this.find(firstNode);
            // find parent of second node
            let secNodeParent = this.find(secNode);

            // if they both have same parent so making an ege will give us a cycle
            if (firstNodeParent === secNodeParent) {
                  // so in that case we return false and this will be our ans too
                  return 0;
            }

            // if rank of first parent is greater than other 
            if (this.rank[firstNodeParent] > this.rank[secNodeParent]) {
                  // then our parent node will be first one
                  // and we'll update the parent of sec node to first node parent
                  this.parent[secNodeParent] = firstNodeParent;
                  // and node then rank of ultimate parent of first node...
                  // ...will be inc by rank of ultimate parent of second node
                  this.rank[firstNodeParent] += this.rank[secNodeParent];
            }

            else {
                  // vice-versa
                  this.parent[firstNodeParent] = secNodeParent;
                  this.rank[secNodeParent] += this.rank[firstNodeParent];
            }

            // once we got true mean we can union then we'll dec n by 1
            this.n--;
            return 1;
      }

      // tells us is our graph is connected or not 
      isConnected() {
            return this.n <= 1;
      }
}

var maxNumEdgesToRemove = function (n, edges) {
      // we'll build 2 union find separately
      // for alice and for bob
      let alice = new UnionFind(n), bob = new UnionFind(n);
      // num of edges we gonna keep
      let count = 0;

      for (let edge of edges) {
            let [type, src, dest] = edge;

            // if type is 3 means they both can travel 
            if (type === 3) {
                  count += (alice.union(src, dest) | bob.union(src, dest));
            }
      }

      for (let edge of edges) {
            let [type, src, dest] = edge;

            //now add individually add for specific type 
            if (type === 1) {
                  count += alice.union(src, dest);
            }

            else if (type === 2) {
                  count += bob.union(src, dest);
            }
      }

      // if both of them could traverse the whole graph 
      // we'll return total nodes - number of nodes we used to build both UF model 
      if (bob.isConnected() && alice.isConnected()) {
            return edges.length - count;
      }

      // if either of them not able to traverse the whole graph simply return -1
      return -1;
};

