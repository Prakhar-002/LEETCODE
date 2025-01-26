# 841. Keys and Rooms

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/keys-and-rooms/description/?envType=study-plan-v2&envId=leetcode-75"><strong>➥ ☢️ 841 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There are `n` rooms labeled from `0` to `n - 1` and all the rooms are locked except for room `0`. Your goal is to visit all the rooms. However, you cannot enter a locked room without having its key.

### When you visit a room, you may find a set of `distinct keys` in it. Each key has a number on it, denoting which room it unlocks, and you can take all of them with you to unlock the other rooms.

### Given an array `rooms` where `rooms[i] `is the set of keys that you can obtain if you visited room `i`, return `true` *if you can visit all the rooms, or* `false` *otherwise*.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ rooms = [[1],[2],[3],[]]

  ### 📤 `Output`  ➤ true

  ### 🔦 `Explanation`  ➤ ➺ We visit room 0 and pick up key 1.</br> ➺ We then visit room 1 and pick up key 2.</br> ➺ We then visit room 2 and pick up key 3.</br> ➺ We then visit room 3.</br> ➺ Since we were able to visit every room, we return true.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤  rooms = [[1,3],[3,0,1],[2],[0]]

  ### 📤 `Output`  ➤  false

  ### 🔦 `Explanation` ➤ We can not enter room number 2 since the only key that unlocks it is in that room.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **`n == rooms.length`** </br>

🔹 **`2 <= n <= 1000`** </br>

🔹 **`0 <= rooms[i].length <= 1000`** </br>

🔹 **`1 <= sum(rooms[i].length) <= 3000`** </br>

🔹 **`0 <= rooms[i][j] < n`** </br>

🔹 **All the values of `rooms[i]` are unique.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Depth-First Search**  </br>
🔸 **Breadth-First Search**  </br>
🔸 **Graph**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Graphs%20-%20DFS/Day%20%E2%9E%BA%2043%20%F0%9F%AA%BB%20841.%20Keys%20and%20Rooms%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20841.%20Keys%20and%20Rooms.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Graphs%20-%20DFS/Day%20%E2%9E%BA%2043%20%F0%9F%AA%BB%20841.%20Keys%20and%20Rooms%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20841.%20Keys%20and%20Rooms.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Graphs%20-%20DFS/Day%20%E2%9E%BA%2043%20%F0%9F%AA%BB%20841.%20Keys%20and%20Rooms%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20841.%20Keys%20and%20Rooms.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%8D%A8%20LeetCode%2075%20-%20%F0%9F%AA%BB%20Ace%20Coding%20Interview/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/12%20Graphs%20-%20DFS/Day%20%E2%9E%BA%2043%20%F0%9F%AA%BB%20841.%20Keys%20and%20Rooms%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20841.%20Keys%20and%20Rooms.js) |
