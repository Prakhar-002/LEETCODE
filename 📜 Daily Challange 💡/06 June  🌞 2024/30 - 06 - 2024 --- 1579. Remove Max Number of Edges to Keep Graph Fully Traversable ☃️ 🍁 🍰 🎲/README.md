# 1579. Remove Max Number of Edges to Keep Graph Fully Traversable

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/description/?envType=daily-question&envId=2024-06-30"><strong>➥ ☢️ 1579 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### Alice and Bob have an undirected graph of `n` nodes and three types of edges:

- Type 1: Can be traversed by Alice only.

- Type 2: Can be traversed by Bob only.

- Type 3: Can be traversed by both Alice and Bob.

### Given an array `edges` where `edges[i] = [typei, ui, vi]` represents a bidirectional edge of type `typei` between nodes `ui` and `vi`, find the maximum number of edges you can remove so that after removing the edges, the graph can still be fully traversed by both Alice and Bob. The graph is fully traversed by Alice and Bob if starting from any node, they can reach all other nodes.

### Return the maximum number of edges you can remove, or return *`-1` if Alice and Bob cannot fully traverse the graph*.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### Input  ➤ n = 4, edges = [[3,1,2],[3,2,3],[1,1,3],[1,2,4],[1,1,2],[2,3,4]]

  ### Output  ➤ 2

  ### Explanation  ➤ If we remove the 2 edges [1,1,2] and [1,1,3]. The graph will still be fully traversable by Alice and Bob. Removing any additional edge will not make it so. So the maximum number of edges we can remove is 2.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### Input ➤  n = 4, edges = [[3,1,2],[3,2,3],[1,1,4],[2,1,4]]

  ### Output  ➤ 0

  ### Explanation ➤  Notice that removing any edge will not make the graph fully traversable by Alice and Bob.


</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

  ### Input ➤ n = 4, edges = [[3,2,3],[1,1,2],[2,3,4]] 

  ### Output  ➤ -1

  ### Explanation  ➤ In the current graph, Alice cannot reach node 4 from the other nodes. Likewise, Bob cannot reach 1. Therefore it's impossible to make the graph fully traversable.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **1 <= n <= 10^5**
- **1 <= edges.length <= min(10^5, 3 * n * (n - 1) / 2)**
- **edges[i].length == 3**
- **1 <= typei <= 3**
- **1 <= ui < vi <= n**
- **All tuples `(typei, ui, vi)` are distinct.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Union Find**
2. **Graph**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

