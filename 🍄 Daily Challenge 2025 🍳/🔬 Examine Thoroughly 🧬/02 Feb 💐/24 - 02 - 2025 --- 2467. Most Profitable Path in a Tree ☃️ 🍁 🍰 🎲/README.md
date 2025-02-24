# 2467. Most Profitable Path in a Tree

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/most-profitable-path-in-a-tree/description/?envType=daily-question&envId=2025-02-24
"><strong>➥ ☢️ 2467 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is an undirected tree with `n` nodes labeled from `0` to `n - 1`, rooted at node 0. You are given a 2D integer array edges of length `n - 1` where edges[i] = [a<sub>i</sub>, b<sub>i</sub>] indicates that there is an edge between nodes a<sub>i</sub> and b<sub>i</sub> in the tree.

### At every node `i`, there is a gate. You are also given an array of even integers `amount`, where `amount[i]` represents:

- the price needed to open the gate at node `i`, if `amount[i]` is negative, or,

- the cash reward obtained on opening the gate at node `i`, otherwise.

### The game goes on as follows:

- Initially, Alice is at node `0` and Bob is at node `bob`.

- At every second, Alice and Bob **each** move to an adjacent node. Alice moves towards some **leaf node**, while Bob moves towards node `0`.

- For **every** node along their path, Alice and Bob either spend money to open the gate at that node, or accept the reward. Note that:

    - If the gate is **already open**, no price will be required, nor will there be any cash reward.

    - If Alice and Bob reach the node **simultaneously**, they share the price/reward for opening the gate there. In other words, if the price to open the gate is `c`, then both Alice and Bob pay `c / 2` each. Similarly, if the reward at the gate is `c`, both of them receive `c / 2` each.

- If Alice reaches a leaf node, she stops moving. Similarly, if Bob reaches node `0`, he stops moving. Note that these events are **independent** of each other.

### Return *the **maximum** net income Alice can have if she travels towards the optimal leaf node*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 Input  ➤ edges = [[0,1],[1,2],[1,3],[3,4]], bob = 3, amount = [-2,4,2,-4,6]

  ### 📤 Output  ➤ 6

  ### 🔦 Explanation  ➤ 

<h3>

The above diagram represents the given tree. The game goes as follows:

- Alice is initially on node 0, Bob on node 3. They open the gates of their respective nodes.

  Alice's net income is now -2.

- Both Alice and Bob move to node 1. 

  Since they reach here simultaneously, they open the gate together and share the reward.

  Alice's net income becomes -2 + (4 / 2) = 0.

- Alice moves on to node 3. Since Bob already opened its gate, Alice's income remains unchanged.

  Bob moves on to node 0, and stops moving.

- Alice moves on to node 4 and opens the gate there. Her net income becomes 0 + 6 = 6.
Now, neither Alice nor Bob can make any further moves, and the game ends.
It is not possible for Alice to get a higher net income.  

</h3>

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 Input ➤ edges = [[0,1]], bob = 1, amount = [-7280,2350]

  ### 📤 Output  ➤ -7280

  ### 🔦 Explanation ➤ 

<h3>

Alice follows the path 0->1 whereas Bob follows the path 1->0.

Thus, Alice opens the gate at node 0 only. Hence, her net income is -7280.

</h3>

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= n <= 10<sup>5</sup>** </br>
🔹 **`edges.length == n - 1`** </br>
🔹 **`edges[i].length == 2`** </br>
🔹 **0 <= ai, bi < n** </br>
🔹 **ai != bi** </br>
🔹 **`edges` represents a valid tree.** </br>
🔹 **`1 <= bob < n`** </br>
🔹 **`amount.length == n`** </br>
🔹 **`amount[i]` is an even integer in the range [-10<sup>4</sup>, 10<sup>4</sup>].** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Tree**  </br>
🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |
| [![LeetCode user Prakhar-002](https://img.shields.io/badge/dynamic/json?style=for-the-badge&labelColor=black&color=%23ffa116&label=Solved&query=solvedOverTotal&url=https%3A%2F%2Fleetcode-badge.vercel.app%2Fapi%2Fusers%2FPrakhar-002&logo=leetcode&logoColor=yellow)](https://leetcode.com/Prakhar-002/)  | [Explanation✏️]() |


