# 746. Min Cost Climbing Stairs

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/min-cost-climbing-stairs/description/"><strong>➥ ♻️ 746 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are presented with a staircase represented by an integer array `cost`. Each `cost[i]` indicates the cost of taking the i<sup>th</sup> step on the staircase. Once you pay this cost, you have the option to climb either one or two steps upward.

### You are free to start from either the step at index 0 or the step at index 1.

### The task is to return the *minimum* total cost to reach the "top" of the staircase (i.e., to surpass the last step in the array).

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ cost = [10,15,20]

  ### 📤 `Output`  ➤ 15

  ### 🔦 `Explanation`  ➤ You will start at index 1.

- Pay 15 and climb two steps to reach the top.

The total cost is 15.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ cost = [1,100,1,1,1,100,1,1,100,1]

  ### 📤 `Output`  ➤ 6

  ### 🔦 `Explanation`  ➤ You will start at index 0.

```JS
Pay 1 and climb two steps to reach index 2.
Pay 1 and climb two steps to reach index 4.
Pay 1 and climb two steps to reach index 6.
Pay 1 and climb one step to reach index 7.
Pay 1 and climb two steps to reach index 9.
Pay 1 and climb one step to reach the top.

The total cost is 6.
```

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 2 <= cost.length <= 1000 </br>

🔹 0 <= cost[i] <= 999 </br>

</br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>
🔸 **Dynamic Programming**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/13%201-D/Day%20%E2%9E%BA%20101%20%F0%9F%A5%A1%20746.%20Min%20Cost%20Climbing%20Stairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%20746.%20Min%20Cost%20Climbing%20Stairs.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/13%201-D/Day%20%E2%9E%BA%20101%20%F0%9F%A5%A1%20746.%20Min%20Cost%20Climbing%20Stairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%20746.%20Min%20Cost%20Climbing%20Stairs.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/13%201-D/Day%20%E2%9E%BA%20101%20%F0%9F%A5%A1%20746.%20Min%20Cost%20Climbing%20Stairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%20746.%20Min%20Cost%20Climbing%20Stairs.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9A%20Study%20%F0%9F%8E%A7%20Plan%20%F0%9F%91%A8%F0%9F%8F%BB%E2%80%8D%F0%9F%92%BB/%F0%9F%A9%B5%20NeetCode%20150%20-%20%F0%9F%8D%87%20Blind%2075%20%2B%2075%20problems/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/13%201-D/Day%20%E2%9E%BA%20101%20%F0%9F%A5%A1%20746.%20Min%20Cost%20Climbing%20Stairs%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%20746.%20Min%20Cost%20Climbing%20Stairs.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/0481c077-e0bd-4d7f-9221-0572db918b10" width = "700px" height="462px" />

</h1>
