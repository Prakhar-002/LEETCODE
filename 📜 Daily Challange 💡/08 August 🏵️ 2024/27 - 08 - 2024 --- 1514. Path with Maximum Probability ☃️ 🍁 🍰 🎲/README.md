# 1514. Path with Maximum Probability

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/path-with-maximum-probability/description/?envType=daily-question&envId=2024-08-27"><strong>➥ ☢️ 1514 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given an undirected weighted graph of `n` nodes (0-indexed), represented by an edge list where `edges[i] = [a, b]` is an undirected edge connecting the nodes `a` and `b` with a probability of success of traversing that edge `succProb[i]`.

### Given two nodes `start` and `end`, find the path with the maximum probability of success to go from `start` to `end` and return its success probability.

### If there is no path from `start` to `end`, return `0`. Your answer will be accepted if it differs from the correct answer by at most `1e-5`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![1514 que 1](https://github.com/user-attachments/assets/341a7d14-6cf3-4b1e-8e4b-f8d67d17938e)

  ### 📥 `Input`  ➤  n = 3, edges = [[0,1],[1,2],[0,2]], succProb = [0.5,0.5,0.2], start = 0, end = 2

  ### 📤 `Output`  ➤ 0.25000

  ### 🔦 `Explanation`  ➤ There are two paths from start to end, one having a probability of success = 0.2 and the other has 0.5 * 0.5 = 0.25.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![1514 que 2](https://github.com/user-attachments/assets/e766edec-ce8a-408c-b43c-1e8ad630f399)

  ### 📥 `Input` ➤ n = 3, edges = [[0,1],[1,2],[0,2]], succProb = [0.5,0.5,0.3], start = 0, end = 2

  ### 📤 `Output`  ➤ 0.30000

</br>

# Example 💡 3️⃣ ˋ°•*⁀➷

![1514 que 3](https://github.com/user-attachments/assets/be15dd87-9100-4091-ab11-0b60fa439122)

  ### 📥 `Input` ➤ n = 3, edges = [[0,1]], succProb = [0.5], start = 0, end = 2

  ### 📤 `Output`  ➤ 0.00000

  ### 🔦 `Explanation`  ➤ There is no path between 0 and 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 **2 <= n <= 10<sup>4</sup>** </br>

🔹 **`0 <= start, end < n`** </br>

🔹 **`start != end`** </br>

🔹 **`0 <= a, b < n`** </br>

🔹 **`a != b`** </br>

🔹 **0 <= succProb.length == edges.length <= 2*10<sup>4</sup>** </br>

🔹 **`0 <= succProb[i] <= 1`** </br>

🔹 **There is at most one edge between every two nodes.** </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Graph**  </br>
🔸 **Heap (Priority Queue)**  </br>
🔸 **Shortest Path**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/27%20-%2008%20-%202024%20---%201514.%20Path%20with%20Maximum%20Probability%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA-1514-PathWithMaximumProbability.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/27%20-%2008%20-%202024%20---%201514.%20Path%20with%20Maximum%20Probability%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP-1514-PathWithMaximumProbability.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/27%20-%2008%20-%202024%20---%201514.%20Path%20with%20Maximum%20Probability%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON-1514-PathWithMaximumProbability.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/08%20August%20%F0%9F%8F%B5%EF%B8%8F%202024/27%20-%2008%20-%202024%20---%201514.%20Path%20with%20Maximum%20Probability%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT-1514-PathWithMaximumProbability.js) |
