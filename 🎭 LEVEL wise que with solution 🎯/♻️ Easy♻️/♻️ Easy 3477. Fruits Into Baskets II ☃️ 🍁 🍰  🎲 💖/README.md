# 3477. Fruits Into Baskets II

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/fruits-into-baskets-ii/description/"><strong>➥ ♻️ 3477 Leetcode Easy ♻️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are given two arrays of integers, `fruits` and `baskets`, each with length `n`. `fruits[i]` represents the quantity of the i<sup>th</sup> type of fruit, while `baskets[j]` represents the capacity of the j<sup>th</sup> basket.

### Your task is to simulate placing the fruits into the baskets, from left to right, according to these rules:

1. Each fruit type must be placed in the *leftmost available* basket that has a capacity greater than or equal to the quantity of that fruit type.
2. Each basket can hold only *one* type of fruit.
3. If a particular fruit type cannot be placed in any of the remaining baskets, it remains unplaced.

### Return the number of fruit types that remain unplaced after attempting to place all fruit types.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ fruits = [4,2,5], baskets = [3,5,4]

  ### 📤 `Output`  ➤ 1

  ### 🔦 `Explanation`  ➤

- fruits[0] = 4 is placed in baskets[1] = 5.
- fruits[1] = 2 is placed in baskets[0] = 3.
- fruits[2] = 5 cannot be placed in baskets[2] = 4.

Since one fruit type remains unplaced, we return 1.

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

  ### 📥 `Input` ➤ fruits = [3,6,1], baskets = [6,4,7]

  ### 📤 `Output`  ➤ 0

  ### 🔦 `Explanation` ➤

- fruits[0] = 3 is placed in baskets[0] = 6.
- fruits[1] = 6 cannot be placed in baskets[1] = 4 (insufficient capacity) but can be placed in the next available basket, baskets[2] = 7.
- fruits[2] = 1 is placed in baskets[1] = 4.

Since all fruits are successfully placed, we return 0.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 n == fruits.length == baskets.length </br>

🔹 1 <= n <= 100 </br>

🔹 1 <= fruits[i], baskets[i] <= 1000 </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Array**  </br>

🔸 **Binary Search**  </br>

🔸 **Segment Tree**  </br>

🔸 **Simulation**  </br>

🔸 **Ordered Set**  </br>

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |
|   ![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)   | [C💖]()  |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="" width = "700px" height="462px" />

</h1>
