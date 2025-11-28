# Q1. Last Stone Weight

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/last-stone-weight/?envType=problem-list-v2&envId=dsa-sequence-valley-heap"><strong>➥ ♻️ Q1 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an array of integers `stones` where `stones[i]` is the weight of the ith stone.

### We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights `x` and `y` with `x <= y`. The result of this smash is:

- If `x == y`, both stones are destroyed, and
- If `x != y`, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.

### At the end of the game, there is at most one stone left.

### Return the weight of the last remaining stone. If there are no stones left, return 0.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ stones = [2,7,4,1,8,1]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤

- We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
- we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
- we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
- we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ stones = [1]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation` ➤ There is only one stone with a weight of 1, so it remains as the last stone.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= stones.length <= 30 </br>
🔹 1 <= stones[i] <= 1000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array** </br>
🔸 **Heap (Priority Queue)** </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q1.%20Last%20Stone%20Weight/%F0%9F%8D%81JAVA%20-%20Last%20Stone%20Weight.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q1.%20Last%20Stone%20Weight/%F0%9F%8E%B2CPP%20-%20Last%20Stone%20Weight.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q1.%20Last%20Stone%20Weight/%F0%9F%8D%B0PYTHON%20-%20Last%20Stone%20Weight.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8F%95%EF%B8%8F%20Quest%20%F0%9F%A7%89/%F0%9F%8F%8E%EF%B8%8F%20DSA%20%F0%9F%92%A8/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/Level%202/Heap/Q1.%20Last%20Stone%20Weight/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20Last%20Stone%20Weight.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/bdc5f87a-85fb-4dc4-ad58-6d9c7ca23b7a" width = "700px" height="462px" />

</h1>
