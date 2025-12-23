# Q3. Cat and Mouse

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/cat-and-mouse/?envType=problem-list-v2&envId=dsa-strategy-summit-game-theory"><strong>➥ 🫀 Q3 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### A game on an undirected graph is played by two players, Mouse and Cat, who alternate turns.

### The graph is given as follows: `graph[a]` is `a` list of all nodes `b` such that ab is an edge of the graph.

### The mouse starts at node `1` and goes first, the cat starts at node `2` and goes second, and there is a hole at node `0`.

### During each player's turn, they must travel along one edge of the graph that meets where they are.  For example, if the Mouse is at node 1, it must travel to any node in `graph[1]`.

### Additionally, it is not allowed for the Cat to travel to the Hole (node `0`).

### Then, the game can end in three ways:

- If ever the Cat occupies the same node as the Mouse, the Cat wins.
- If ever the Mouse reaches the Hole, the Mouse wins.
- If ever a position is repeated (i.e., the players are in the same position as a previous turn, and it is the same player's turn to move), the game is a draw.

### Given a `graph`, and assuming both players play optimally, return

- `1` if the mouse wins the game,
- `2` if the cat wins the game, or
- `0` if the game is a draw.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

<img src="" width="" height=""/>

  ### 📥 `Input`  ➤  graph = [[2,5],[3],[0,4,5],[1,4,5],[2,3],[0,2,3]]

  ### 📤 `Output`  ➤ 0

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  graph = [[1,3],[0],[3],[0,2]]

  ### 📤 `Output`  ➤ 1

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`3 <= graph.length <= 50`** </br>
🔹 **`1 <= graph[i].length < graph.length`** </br>
🔹 **`0 <= graph[i][j] < graph.length`** </br>
🔹 **`graph[i][j] != i`** </br>
🔹 **`graph[i] is unique.`** </br>
🔹 **`The mouse and the cat can always move. `** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Math**  </br>
🔸 **Dynamic Programming**  </br>
🔸 **Graph**  </br>
🔸 **Topological Sort**  </br>
🔸 **Memoization**  </br>
🔸 **Game Theory**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Game%20Theory/Q3.%20Cat%20and%20Mouse/%F0%9F%8D%81JAVA%20-%20Cat%20and%20Mouse.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Game%20Theory/Q3.%20Cat%20and%20Mouse/%F0%9F%8E%B2CPP%20-%20Cat%20and%20Mouse.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Game%20Theory/Q3.%20Cat%20and%20Mouse/%F0%9F%8D%B0PYTHON%20-%20Cat%20and%20Mouse.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%208/Game%20Theory/Q3.%20Cat%20and%20Mouse/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Cat%20and%20Mouse.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/244d38bc-7535-4908-a80f-c4b5a9ebd9e0" width = "700px" height="462px" />

</h1>
