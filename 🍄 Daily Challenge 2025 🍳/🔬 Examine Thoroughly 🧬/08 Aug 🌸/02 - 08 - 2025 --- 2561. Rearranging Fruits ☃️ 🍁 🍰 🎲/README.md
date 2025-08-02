# 2561. Rearranging Fruits

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/rearranging-fruits/description/?envType=daily-question&envId=2025-08-02"><strong>➥ 🫀 2561 Leetcode Hard 🫀 </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two fruit baskets, each containing `n` fruits. The cost of each fruit is represented by two 0-indexed integer arrays: `basket1` and `basket2`. The objective is to make both baskets equal.

### To equalize the baskets, you can perform a specific operation as many times as you wish:

- Choose two indices, `i` and `j`, and swap the i<sup>th</sup> fruit from `basket1` with the j<sup>th</sup> fruit from `basket2`. The cost of this swap is `min(basket1[i], basket2[j])`.

### Two baskets are considered "equal" if sorting them by the cost of their fruits results in arrays that are identical.

### Your task is to return the *minimum cost* required to make the two baskets equal, or -1 if it is impossible to equalize the baskets through swapping.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ basket1 = [4,2,2,2], basket2 = [1,4,1,2]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤ Swap index 1 of basket1 with index 0 of basket2, which has cost 1. Now basket1 = [4,1,2,2] and basket2 = [2,4,1,2]. Rearranging both the arrays makes them equal.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ basket1 = [2,3,4,1], basket2 = [3,2,5,1]

  ### 📤 `Output`  ➤ -1

  ### 🔦 `Explanation` ➤ It can be shown that it is impossible to make both the baskets equal.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 basket1.length == basket2.length </br>

🔹 1 <= basket1.length <= 10<sup>5</sup> </br>

🔹 1 <= basket1[i], basket2[i] <= 10<sup>9</sup> </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Hash Table**  </br>

🔸 **Greedy**  </br>

🔸 **Sort**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/02%20-%2008%20-%202025%20---%202561.%20Rearranging%20Fruits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%81JAVA%20-%202561.%20Rearranging%20Fruits.java) |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/02%20-%2008%20-%202025%20---%202561.%20Rearranging%20Fruits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8E%B2CPP%20-%202561.%20Rearranging%20Fruits.cpp)  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/02%20-%2008%20-%202025%20---%202561.%20Rearranging%20Fruits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%F0%9F%8D%B0PYTHON%20-%202561.%20Rearranging%20Fruits.py) |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%8D%84%20Daily%20Challenge%202025%20%F0%9F%8D%B3/%F0%9F%94%AC%20Examine%20Thoroughly%20%F0%9F%A7%AC/08%20Aug%20%F0%9F%8C%B8/02%20-%2008%20-%202025%20---%202561.%20Rearranging%20Fruits%20%E2%98%83%EF%B8%8F%20%F0%9F%8D%81%20%F0%9F%8D%B0%20%F0%9F%8E%B2/%E2%98%83%EF%B8%8FJAVASCRIPT%20-%202561.%20Rearranging%20Fruits.js) |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/d1dbe2a7-fcdf-41c5-aeb4-e9e768ed454b" width = "700px" height="462px" />

</h1>
