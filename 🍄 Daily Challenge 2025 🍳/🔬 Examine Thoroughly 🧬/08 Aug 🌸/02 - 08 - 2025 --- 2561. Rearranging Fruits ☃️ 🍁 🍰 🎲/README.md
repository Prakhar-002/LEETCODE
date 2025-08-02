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
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
