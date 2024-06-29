# ✏️ Beats 💯100% || Only ❷ Steps || Fastest ✈️ Easy ♻️ || Detailed Explanation ✅

<h2 align="center"> 

<a href="https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/solutions/5385288/beats-100-only-steps-fastest-easy-detailed-explanation"><strong>➥ 💡 Live Solution On Leetcode ✒️</strong></a>
</h2>

# 🎉 Screenshot 📸

![2192.png](https://assets.leetcode.com/users/images/fcc214db-5a6b-45e8-be1f-98c1f8ec861d_1719626368.76604.png)

## Input 📥 

    1. One n which denotes the number of nodes of Directed Acyclic Graph

    2. 2D array which repesent our edges 

    3. Note edges[i].length is 2

## Output 📤

    We have to submit our new array that will content every ancestor

    of every node

# Example 📜

![2192 que 1 new.png](https://assets.leetcode.com/users/images/8d4a71dc-09c8-4eda-be84-66bb0ed419a3_1719626821.0981202.png)


    `Ex.` 

        We have 8 nodes from 0 to 7 

        We need to find every node from which we can reach our Ith node

        1. To 0 = [] cause we can not go to node 0 from no node

        2. To 1 = [] same logic as 0

        3. To 2 = [] same logic as 1

        4. To 3 = [0, 1] we can reach 3 from 0 and 1 

        5. To 4 = [0, 2] from 0 and 2

        6. To 5 = [0, 1, 3] from 0 , 1 and 3

        7. To 6 = [0, 1, 2, 3, 4] from 0, 1, 2, 3 and 4  

        8. To 7 = [0, 1, 2, 3] from 0, 1, 2 and 3

        We got our que now let discuss approach and code too

        

# Approach ✍🏼

    Step 1 -> We will build our own graph in which we will store

        Destinations of every node mean 

            We store by Ith node we can which node

        Ex. we have edegs we rebuild it 

        🔹edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

        🔹graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

    Step 2 -> We will make a Func that will push ancestor 

        now Graph[I] will be our info of ancestor 

        We know that for I = 0 Graph[0] = [3, 4]

        We know 3 and 4 have a ancestor 0 so We will push 0 for

        3 and 4 Simple 

# Step wise Explanation 🪜

    There will be 4 steps as we seen above

    Step 1 ➤ Making our own graph 

    Step 2 ➤ Call our dfs that append ancestor 

    Step 3 ➤ Submit our ancestor

## 📌 Step 1️⃣ 

    🔹 In 2D array at every edges[i][0] we will push our edges[i][1]

    🔹 Cause edges[i][0] is ancestor of edges[i][1] 

    🔹 [0,3] -> 0 is ancestor of 3

    🔹 [1,4] -> 1 is ancestor of 4


C++
```C++ []
class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        // making 2D array
        vector<vector<int>> ancestors(n);
        vector<vector<int>> graph(n);
        // edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]
        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
        }
        //* graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]
    }
};

```
JAVA
``` JAVA []
class Solution {

    public List<List<Integer>> getAncestors(int n, int[][] edges) {
         //making 2D array
        List<List<Integer>> ancestors = new ArrayList<>(n);
        List<List<Integer>> graph = new ArrayList<>(n);

        for (int i = 0; i < n; i++) {
            ancestors.add(new ArrayList<>());
            graph.add(new ArrayList<>());
        }
        // edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]
        for (int[] edge : edges) {
            graph.get(edge[0]).add(edge[1]);
        }
        // * graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

    }
}
```
JAVASCRIPT
``` JAVASCRIPT []
var getAncestors = function (n, edges) {
    // making 2D array
    let ancestors = Array.from({ length: n }, () => []);
    let graph = Array.from({ length: n }, () => []);

    // edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]
    for (let edge of edges) {
        graph[edge[0]].push(edge[1]);
    }
    //* graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]
};
```
PYTHON
```PYTHON []
class Solution:
    def getAncestors(self, n: int, edges: List[List[int]]) -> List[List[int]]:
        # making 2D array
        ancestors = [[] for _ in range(n)]
        graph = [[] for _ in range(n)]

        # edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

        for edge in edges:
            graph[edge[0]].append(edge[1])

        # * graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

```

## 📌 Step 2️⃣ 

    🔹 making our dfs Function 

    🔹 Work is simple apply loop for 1 to N 

    🔹 Get the array of Ith and traverse it 

    🔹 Go to that values and push the index 

    🔹 We know that for I = 0 Graph[0] = [3, 4]

         We know 3 and 4 have a ancestor 0 so We will push 0 for

         3 and 4 Simple 


C++
```C++ []
    void dfs(vector<vector<int>>& graph, int i, int j,
             vector<vector<int>>& ancestors) {
        // get tha list of ancestors at index j mean that will be ancestors of our index i
        for (auto& g : graph[j]) {
            // checking if empty or last elem is not same elem means 
            // 0 is not the ancestor of 0
            if (ancestors[g].empty() || ancestors[g].back() != i) {
                // push back into our array
                ancestors[g].push_back(i);
                // call for next element
                dfs(graph, i, g, ancestors);
            }
        }
    }

```
JAVA
``` JAVA []
    private void dfs(List<List<Integer>> graph, int i, int j, List<List<Integer>> ancestors) {
        // get tha list of ancestors at index j mean that will be ancestors of our index i
        for (int g : graph.get(j)) {
            // checking if empty or and last elem is not same elem
            //  means 0 is not the ancestor of 0
            if (ancestors.get(g).isEmpty() || ancestors.get(g).get(ancestors.get(g).size() - 1) != i) {
                // push back into our array
                ancestors.get(g).add(i);
                // call for next element
                dfs(graph, i, g, ancestors);
            }
        }
    }
```
JAVASCRIPT
``` JAVASCRIPT []
const dfs = function (graph, i, j, ancestors) {
    // get tha list of ancestors at index j mean that will be ancestors of our index i
    for (let g of graph[j]) {
        // checking if empty or last elem is not same elem means 
        // 0 is not the ancestor of 0
        if (!ancestors[g].length || ancestors[g][ancestors[g].length - 1] !== i) {
            // push back into our array
            ancestors[g].push(i);
            // call for next element
            dfs(graph, i, g, ancestors);
        }
    }
}
```
PYTHON
```PYTHON []
    def dfs(self, graph, i, j, ancestors):
        # get tha list of ancestors at index j mean that will be ancestors of our index i
        for g in graph[j]:
            # checking if empty or last elem is not same elem 
            # means 0 is not the ancestor of 0
            if not ancestors[g] or ancestors[g][-1] != i:
                # push back into our array
                ancestors[g].append(i)
                # call for next element
                self.dfs(graph, i, g, ancestors)
```

## 📌 Step 3️⃣

    🔹 calling our dfs Function and SUBMIT 🚀

C++
```C++ []
    // We call our function for every index o to N
    // call with our graph and index and index of list of ancestor
    // and our ans ancestors 
    for (int i = 0; i < n; i++) {
        dfs(graph, i, i, ancestors);
    }

    return ancestors;
```
JAVA
``` JAVA []
    // We call our function for every index o to N
    // call with our graph and index and index of list of ancestor
    // and our ans ancestors 
    for (int i = 0; i < n; i++) {
        dfs(graph, i, i, ancestors);
    }

    return ancestors;
```
JAVASCRIPT
``` JAVASCRIPT []
    // We call our function for every index o to N
    // call with our graph and index and index of list of ancestor
    // and our ans ancestors 
    for (let i = 0; i < n; i++) {
        dfs(graph, i, i, ancestors);
    }

    return ancestors;
};
```
PYTHON
```PYTHON []
    # We call our function for every index o to N
    # call with our graph and index and index of list of ancestor
    # and our ans ancestors 
    for i in range(n):
        self.dfs(graph, i, i, ancestors)

    return ancestors

```

 
# Complexity 🏗️
- ⌚ Time complexity: $$O(n^2)$$ `n given`
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- 🧺 Space complexity: $$O(n^2)$$ `For making ancestor array`
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code

C++
```C++ []
class Solution {
    void dfs(vector<vector<int>>& graph, int i, int j,
             vector<vector<int>>& ancestors) {
        // get tha list of ancestors at index j mean that 
        // will be ancestors of our index i
        for (auto& g : graph[j]) {
            // checking if empty or last elem is not same elem
            // means 0 is not the ancestor of 0
            if (ancestors[g].empty() || ancestors[g].back() != i) {
                // push back into our array
                ancestors[g].push_back(i);
                // call for next element
                dfs(graph, i, g, ancestors);
            }
        }
    }

public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> ancestors(n);
        vector<vector<int>> graph(n);

        // edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
        }

        //* graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

        // We call our function for every index o to N
        // call with our graph and index and index of list of ancestor
        // and our ans ancestors 
        for (int i = 0; i < n; i++) {
            dfs(graph, i, i, ancestors);
        }

        return ancestors;
    }
};
```
JAVA
``` JAVA []
class Solution {

    private void dfs(List<List<Integer>> graph, int i, int j, List<List<Integer>> ancestors) {
        // get tha list of ancestors at index j mean that 
        // will be ancestors of our index i
        for (int g : graph.get(j)) {
            // checking if empty or last elem is not same elem
            // means 0 is not the ancestor of 0
            if (ancestors.get(g).isEmpty() || ancestors.get(g).get(ancestors.get(g).size() - 1) != i) {
                // push back into our array
                ancestors.get(g).add(i);
                // call for next element
                dfs(graph, i, g, ancestors);
            }
        }
    }

    public List<List<Integer>> getAncestors(int n, int[][] edges) {
        List<List<Integer>> ancestors = new ArrayList<>(n);
        List<List<Integer>> graph = new ArrayList<>(n);

        for (int i = 0; i < n; i++) {
            ancestors.add(new ArrayList<>());
            graph.add(new ArrayList<>());
        }

        // edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

        for (int[] edge : edges) {
            graph.get(edge[0]).add(edge[1]);
        }

        // * graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

        // We call our function for every index o to N
        // call with our graph and index and index of list of ancestor
        // and our ans ancestors 
        for (int i = 0; i < n; i++) {
            dfs(graph, i, i, ancestors);
        }

        return ancestors;
    }
}
```
JAVASCRIPT
``` JAVASCRIPT []
const dfs = function (graph, i, j, ancestors) {
    // get tha list of ancestors at index j mean 
    //that will be ancestors of our index i
    for (let g of graph[j]) {
        // checking if empty or last elem is not same elem 
        // means 0 is not the ancestor of 0
        if (!ancestors[g].length
            || ancestors[g][ancestors[g].length - 1] !== i) {
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
```
PYTHON
```PYTHON []
class Solution:

    def dfs(self, graph, i, j, ancestors):
        for g in graph[j]:
            # checking if already added and last elem is not same elem 
            # means 0 is not the ancestor of 0
            if not ancestors[g] or ancestors[g][-1] != i:
                # push back into our array
                ancestors[g].append(i)
                # call for next element
                self.dfs(graph, i, g, ancestors)

    def getAncestors(self, n: int, edges: List[List[int]]) -> List[List[int]]:
        ancestors = [[] for _ in range(n)]
        graph = [[] for _ in range(n)]

        # edgeList = [[0,3],[0,4],[1,3],[2,4],[2,7],[3,5],[3,6],[3,7],[4,6]]

        for edge in edges:
            graph[edge[0]].append(edge[1])

        # * graph = [[3, 4], [3], [4, 7], [5, 6, 7], [6]]

        # We call our function for every index o to N
        # call with our graph and index and index of list of ancestor
        # and our ans ancestors 
        for i in range(n):
            self.dfs(graph, i, i, ancestors)

        return ancestors

```
